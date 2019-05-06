
#include <iostream>
#include "Spectacol.h"
#include "Teatru.h"

void Spectacol::adauga_prezentare(unsigned int zi, unsigned int luna, unsigned int an, unsigned int locuri)
{
    if(zi < 1 || zi > 31 || luna < 1 || luna > 12)
        return;
    struct prezentare p;
    p.zi = zi;
    p.luna = luna;
    p.an = an;
    p.locuri = locuri;
    p.locuri_ocupate = 0;
    prezentari.push_back(p);
}

bool Spectacol::exista_prezentare(unsigned int zi, unsigned int luna, unsigned int an)
{
    auto iter = prezentari.begin();
    while(iter != prezentari.end())
    {
        if(iter->zi == zi && iter->luna == luna && iter->an == an)
            return true;
        iter++;
    }
    return false;
}

void Spectacol::vinde_bilet(unsigned int zi, unsigned int luna, unsigned int an, int varsta)
{
    auto iter = prezentari.begin();
    while(iter != prezentari.end())
    {
        if(iter->zi == zi && iter->luna == luna && iter->an == an)
        {
            if(iter->locuri_ocupate >= iter->locuri)
            {
                cout << "\nNu mai sunt locuri disponibile.\n";
                return;
            }
            else
            {
                cout << "\nBilet vandut!\n";
                iter->locuri_ocupate++;

                //daca teatrul este interactiv, acesta isi mareste durata cu fiecare bilet vandut
                if(this->getTip() == "teatru")
                {
                    if(dynamic_cast<Teatru&>(*this).isInteractiv())
                    {   //un minut pentru adult si doua pentru copii
                        if(varsta < 18)
                            this->durata += 2;
                        else
                            this->durata += 1;
                    }
                }

                return;
            }

        }
        iter++;
    }
    cout << "Nu exista nicio prezentare la data selectata";
}


void Spectacol::afiseaza_prezentari()
{
    for(auto i : prezentari)
    {
        cout << i.zi << "." << i.luna << "." << i.an << " : " << i.locuri_ocupate << " / " << i.locuri << endl;
    }
    if(prezentari.empty())
        cout << "Nu exista prezentari";
}



Spectacol::Spectacol(const string &nume, double durata, bool pentru_adulti, string gen) : nume(nume), durata(durata),
                                                                                    pentru_adulti(pentru_adulti), gen(gen) {}

const string &Spectacol::getGen() const {
    return gen;
}

double Spectacol::getDurata() const {
    return durata;
}

bool Spectacol::isPentruAdulti() const {
    return pentru_adulti;
}

const string &Spectacol::getNume() const {
    return nume;
}
