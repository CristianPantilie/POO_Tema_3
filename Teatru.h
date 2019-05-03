#ifndef POO_TEMA_3_TEATRU_H
#define POO_TEMA_3_TEATRU_H


#include "Spectacol.h"

class Teatru: Spectacol {

private:

    bool interactiv;
    double durata_variabila; //un minut pentru adult si doua pentru copii sub 16 ani)

public:
    Teatru(const string &nume, double durata, bool pentruAdulti, const string &gen, bool interactiv);

};


#endif //POO_TEMA_3_TEATRU_H
