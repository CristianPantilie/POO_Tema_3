
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

