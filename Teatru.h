#ifndef POO_TEMA_3_TEATRU_H
#define POO_TEMA_3_TEATRU_H


#include "Spectacol.h"

class Teatru: Spectacol {
//    const bool pentru_adulti = false;  baga-l in constructor

    bool interactiv;
    int durata_variabila; //un minut pentru adult si doua pentru copchii sub 16 ani)
};


#endif //POO_TEMA_3_TEATRU_H
