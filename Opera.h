
#ifndef POO_TEMA_3_OPERA_H
#define POO_TEMA_3_OPERA_H


#include <ostream>
#include "Spectacol.h"

class Opera : public Spectacol{
private:
    int nr_acte;

    struct act
    {
        string nume_solist;
        string tip_solist;
        double durata;
    };

    double pauza;
    vector<struct act> acte;



public:
    Opera(const string &nume, double durata, bool pentruAdulti, const string &gen, int nrActe, double pauza);
    void adauga_act(string nume, string tip, double durata);


};


#endif //POO_TEMA_3_OPERA_H
