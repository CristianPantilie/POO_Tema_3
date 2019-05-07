#include <iostream>
#include "Spectacol.h"
#include "Spectator.h"
#include "Opera.h"
#include "Circ.h"
#include "Ghiseu.h"
#include "Manager.h"
#include "Teatru.h"

using namespace std;

#define PENTRU_ADULTI true
#define PENTRU_ORICINE false
#define INTERACTIV true
#define NEINTERACTIV false

int main() {



    Opera *o = new Opera("O opera", 136, PENTRU_ORICINE, "drama", 2, 10);
    o->adauga_act("Salam", "TENOR", 55);
    o->adauga_act("Abi", "BASS", 60);

    Circ *c = new Circ("Circul meu", 80);
    c->adauga_numar(PENTRU_ORICINE, "lei,tigri,elefanti");

    Circ *c1 = new Circ("Un alt circ", 90);
    c->adauga_numar(PENTRU_ADULTI, "oi, pisici, caini");
    c->adauga_numar(PENTRU_ORICINE, "muste");

    Teatru *t = new Teatru("Putin teatru", 100, PENTRU_ADULTI, "drama", INTERACTIV);


    o->adauga_prezentare(24, 5, 2019, 44);
    t->adauga_prezentare(30, 5, 2019, 15);
    t->adauga_prezentare(16, 5, 2019, 30);
    t->adauga_prezentare(1, 6, 2019, 19);


    Manager *manager = Manager::instantiaza();
    manager->adauga_spectacol(o);
    manager->adauga_spectacol(c);
    manager->adauga_spectacol(t);



    Ghiseu *ghiseu = Ghiseu::instantiaza();
    ghiseu->operatie(manager);

    ghiseu->operatie(manager);



    return 0;
}

