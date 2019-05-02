
#ifndef POO_TEMA_3_OPERA_H
#define POO_TEMA_3_OPERA_H


#include "Spectacol.h"

class Opera{
private:

    int nr_acte;

    struct act
    {
        string nume_solist;
        string tip_solist;
        double durata;
    };

    double pauza;



public:
    Opera(string sol);
    void afis();

};


#endif //POO_TEMA_3_OPERA_H
