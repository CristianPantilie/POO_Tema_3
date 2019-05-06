
#include <iostream>
#include "Opera.h"

Opera::Opera(const string &nume, double durata, bool pentruAdulti, const string &gen, int nrActe, double pauza)
        : Spectacol(nume, durata, pentruAdulti, gen), nr_acte(nrActe), pauza(pauza){}



void Opera::adauga_act(string nume, string tip, double durata)
{
    struct act a;
    a.nume_solist = nume;
    a.tip_solist = tip;
    a.durata = durata;
    acte.push_back(a);
}

string Opera::getTip() {
    return "opera";
}

double Opera::getPauza() const {
    return pauza;
}

vector<string> Opera::getSolisti()
{
    vector<string> solisti;
    for(auto i : acte)
        solisti.push_back(i.tip_solist);

    return solisti;
}

void Opera::print_details()
{
    cout << getNume() << " : " << "opera de " << getGen() << ", " << durata << " minute, ";
    if(pentru_adulti)
        cout << "pentru adulti, ";
    else
        cout << "orice varsta, ";

    cout << nr_acte << " acte:";
    int k = 1;
    for(auto i : acte)
        cout << "\n\t\t\t" <<  k++ << ". " << i.tip_solist << ": " << i.nume_solist << ", " << i.durata << " minute.";


}


