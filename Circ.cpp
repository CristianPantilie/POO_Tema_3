#include <iostream>
#include "Circ.h"

Circ::Circ(const string &nume, double durata)
        : Spectacol(nume, durata, false, "COMEDIE")
        {

        }


void Circ::adauga_numar(bool adulti, string animale)
{
    struct numar nr;
    nr.pentru_adulti = adulti;
    if(adulti)
        pentru_adulti = true;   //daca un numar e pentru adulti, tot spectacolul devine asa

    size_t pos = 0;
    string token;
    while( (pos = animale.find(',')) != string::npos)
    {
        token = animale.substr(0, pos);
        nr.animale.push_back(token);
        animale.erase(0, pos + 1);
    }
    nr.animale.push_back(animale);

    numere.push_back(nr);
}

string Circ::getTip() {
    return "circ";
}

vector<string> Circ::getAnimale() {

    vector<string> rezultat;
    for(auto it : numere)
    {
        rezultat.insert(rezultat.end(), it.animale.begin(), it.animale.end());
    }

    return rezultat;
}
