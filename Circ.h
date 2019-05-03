#ifndef POO_TEMA_3_CIRC_H
#define POO_TEMA_3_CIRC_H


#include "Spectacol.h"

class Circ: Spectacol {

private:
    list<string> animale;

    struct numar
    {
        bool pentru_adulti;
        vector<string> animale;
    };

public:
    Circ(const string &nume, double durata);
    void adauga_numar(bool adulti, string animale);

};


#endif //POO_TEMA_3_CIRC_H
