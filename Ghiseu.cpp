
#include "Ghiseu.h"


Ghiseu *Ghiseu::instanta = nullptr;

Ghiseu::Ghiseu() = default;

Ghiseu *Ghiseu::instantiaza()
{
    if(instanta == nullptr)
        instanta = new Ghiseu();

    return instanta;
}


