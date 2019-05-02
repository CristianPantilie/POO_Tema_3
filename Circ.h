#ifndef POO_TEMA_3_CIRC_H
#define POO_TEMA_3_CIRC_H


#include "Spectacol.h"

class Circ: Spectacol {
//    pentru_adulti = false;   (il bagi in constructor)
//    gen = comedie;    (la fel, si sa faci si tipuri in clasa spectacol)
//    daca un nr e pentru adulti, tot spectacolul devine pentru adulti (constructor)
    list<string> animale;

    struct numar
    {
        bool pentru_adulti;    //daca e pentru adulti atunci tot spectacolul devine asa
        vector<string> animale;
    };

//    cum il impart in mai multe numere?

};


#endif //POO_TEMA_3_CIRC_H
