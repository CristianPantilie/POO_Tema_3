
#include <iostream>
#include "Ghiseu.h"
#include "Spectator.h"
#include "Opera.h"
#include "Circ.h"


Ghiseu *Ghiseu::instanta = nullptr;

Ghiseu::Ghiseu() = default;

Ghiseu *Ghiseu::instantiaza()
{
    if(instanta == nullptr)
        instanta = new Ghiseu();

    return instanta;
}

Spectator Ghiseu::citire_date_spectator()
{
    string nume;
    cout << "Numele: ";
    cin >> nume;
    unsigned int varsta;
    cout << "\nVarsta: ";
    cin >> varsta;
    Spectator s(nume, varsta);

    cout << "\nApasati 1 pentru a adauga o exigenta si orice altceva pentru a va opri.";
    int c;
    cin >> c;
    while(c == 1)
    {

        cout << "\nMeniu: apasati tasta corespunzatoare pentru a adauga exigenta";
        cout << "\n1: Nu combinatie de felul (tip, gen) e.g. (OPERA,DRAMA).";
        cout << "\n2: Durata maxima de ... minute.";
        cout << "\n3: Fara animale periculoase.";
        cout << "\n4: Maxim ... spectatori.";

        cin >> c;
        string tip, gen, animal;
        double durata;
        int spectatori;
        switch (c) {
            case 1:
                cout << "\nTip:";
                cin >> tip;
                cout << "\nGen:";
                cin >> gen;
                s.setExigentaCombinatie(tip, gen);
                break;
            case 2:
                cout << "\nIntroduceti durata maxima:";
                cin >> durata;
                s.setExigentaDurataMax(durata);
                break;
            case 3:
                cout << "\nIntroduceti un animal periculos:";
                cin >> animal;
                s.setExigentaAnimale(animal);
                break;
            case 4:
                cout << "\nIntroduceti numarul maxim de spectatori:";
                cin >> spectatori;
                s.setExigentaSpectatoriMax(spectatori);
                break;
            default:
                cout << "\nOptiune invalida";
                break;
        }
        cout << "\nExigenta adaugata. \nApasati 1 pentru a adauga o exigenta si orice altceva pentru a va opri.";
        cin >> c;
    }

    cout << "\nApasati 1 pentru a adauga o pofta si orice altceva pentru a va opri.";
    cin >> c;
    while(c == 1)
    {

        cout << "\nMeniu: apasati tasta corespunzatoare pentru a adauga pofta";
        cout << "\n1: Spectacol de un anumit gen (comedie, drama, actiune).";
        cout << "\n2: Spectacol de un anumit tip (teatru, opera, circ).";
        cout << "\n3: Durata minima.";
        cout << "\n4: Anumite animale la circ";
        cout << "\n5: Teatru interactiv";
        cout << "\n6: Anumite voci la opera (tenor, bariton, bas)";


        cin >> c;
        string gen, tip, animal, voce;
        double durata;
        switch (c) {
            case 1:
                cout << "\nIntroduceti genul:";
                cin >> gen;
                s.setPoftaGen(gen);
                break;
            case 2:
                cout << "\nIntroduceti tipul:";
                cin >> tip;
                s.setPoftaTip(tip);
                break;
            case 3:
                cout << "\nIntroduceti durata minima (minute):";
                cin >> durata;
                s.setPoftaDurataMin(durata);
                break;
            case 4:
                cout << "\nIntroduceti animalul dorit:";
                cin >> animal;
                s.setPoftaCircAnimale(animal);
                break;
            case 5:
                s.setPoftaTeatruInteractiv(true);
                break;
            case 6:
                cout << "\nIntroduceti vocea dorita:";
                s.setPoftaOperaVoce(voce);
                break;
            default:
                cout << "\nOptiune invalida";
                break;
        }
        cout << "\nPofta adaugata. \nApasati 1 pentru a adauga o pofta si orice altceva pentru a va opri.";
        cin >> c;
    }

    return s;
}

vector<Spectacol *> Ghiseu::cauta_exigente(vector<Spectacol *> spectacole, Spectator s)
{
    vector<Spectacol *> rezultat;

//    vector<string> exigenta_combinatie;   //(tip, gen) tipul pe pozitia para urmat de genul pe pozitia impara
//    double exigenta_durata_max;
//    vector<string> exigenta_animale;      //periculoase?
//    int exigenta_spectatori_max;
//

    for(auto it = spectacole.begin(); it != spectacole.end(); it++){
        bool ebun = true;

        string tip = (*it)->getTip();
        string gen = (*it)->getGen();
        double durata = (*it)->getDurata();
        bool  pentru_adulti = (*it)->isPentruAdulti();


        //verific combinatiile interzise
        auto combinatii = s.getExigentaCombinatie();
        for(auto i = combinatii.begin() + 1; i != combinatii.end(); i++)
        {
            if ((*i) == gen && (*(i - 1)) == tip)
            {
                ebun = false;
                break;
            }
        }

        //verific durata maxima
        double d = s.getExigentaDurataMax();
        if(d != -1 && durata > d)
            ebun = false;

        //verific animalele interzise
        if(tip == "circ")
        {
            vector<string> animals = dynamic_cast<Circ *>((*it))->getAnimale();
            vector<string> animale = s.getExigentaAnimale();
            for(auto i = animals.begin(); i != animals.end(); i++)
            {
                for(auto j = animale.begin(); j != animale.end(); j++)
                {
                    if(*i == *j)
                        ebun = false;
                }
            }
        }

        //TODO:verific maximul de spectatori

        //verific varsta
        if(s.getVarsta() < 18 && pentru_adulti)
            ebun = false;

        //daca e bun il bag in vectorul rezultat
        if(ebun)
            rezultat.push_back(*it);
    }

    return rezultat;
}


//vector<Spectacol *> Ghiseu::cauta_pofte(vector<Spectacol *> spectacole, Spectator s)
//{
//
//
//    if( tip == "opera")
//    {
//        cout << "pauza operei" << dynamic_cast<Opera *>((*it))->getPauza();
//    }
//    else if(tip == "circ")
//    {
//        cout << "";
//    }
//    else if(tip == "teatru")
//    {
//        cout << "";
//    }
//    return vector<Spectacol>();
//}



void Ghiseu::afisare_spectacole(vector<Spectacol *> spectacole)
{
    for(auto i :spectacole)
        cout << i;
}

void Ghiseu::operatie(Manager *m)
{
    Spectator s = citire_date_spectator();
    cout << "ok";
    vector<Spectacol *> spectacole = m->spectacole_valabile();
    cout << "ok";
    spectacole = cauta_exigente(spectacole, s);
    cout << "ok";
//    spectacole = cauta_pofte(spectacole, s);

    afisare_spectacole(spectacole);
}
