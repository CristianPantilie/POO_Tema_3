
#include <iostream>
#include "Ghiseu.h"
#include "Spectator.h"


Ghiseu *Ghiseu::instanta = nullptr;

Ghiseu::Ghiseu() = default;

Ghiseu *Ghiseu::instantiaza()
{
    if(instanta == nullptr)
        instanta = new Ghiseu();

    return instanta;
}

void Ghiseu::citire_date_spectator()
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


}

vector<Spectacol> Ghiseu::cauta_exigente(vector<Spectacol> spectacole)
{
    //iei fiecare spectacol si verifici daca se potrivesc exigentele cu ce e acolo

    return vector<Spectacol>();
}

vector<Spectacol> Ghiseu::cauta_pofte(vector<Spectacol> spectacole)
{
    return vector<Spectacol>();
}


