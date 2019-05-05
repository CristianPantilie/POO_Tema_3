#ifndef POO_TEMA_3_CIRC_H
#define POO_TEMA_3_CIRC_H


#include "Spectacol.h"

class Circ: public Spectacol {

private:

    struct numar
    {
        bool pentru_adulti;
        vector<string> animale;
    };

    vector<struct numar> numere;

public:
    Circ(const string &nume, double durata);
    void adauga_numar(bool adulti, string animale);

    string getTip();

    vector<string> getAnimale();

};


#endif //POO_TEMA_3_CIRC_H
