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

//    Spectacol cacat("futaiul", 136, false, "Comedie");
//    cacat.adauga_prezentare(24, 04, 2019, 44);
//    cacat.adauga_prezentare(44, 90, 555, 0);
//    cacat.adauga_prezentare(15, 03, 1999, 1);
//
//    cout << cacat.exista_prezentare(44, 90, 555) << endl;
//    cout << cacat.exista_prezentare(24, 04, 2019) << endl;


//    Spectator s("Cristianusul", 23);
//    s.adauga_pofta("Comedie");
//    s.adauga_pofta("Opera");
//    s.adauga_pofta("Tenor");
//    s.adauga_pofta("fara pauze");
//    s.adauga_pofta("pinguini");
//    s.adauga_pofta("teatru interactiv");
//
//    s.adauga_exigenta("nu opera dramatica");
//    s.adauga_exigenta("maxim 130 min");
//    s.adauga_exigenta("nu animale periculoase");
//    s.adauga_exigenta("maxim 40 spectatori");
//    //spectacolul sa fie potrivit pentru categoria de varsta a clientului
//
//    s.afis();
//
//    Opera o("TENOR");
//    o.afis();


    Opera o("O opera", 136, PENTRU_ORICINE, "DRAMA", 2, 10);
    o.adauga_act("Salam", "TENOR", 55);
    o.adauga_act("Abi", "BASS", 60);

    Circ c("Circul meu", 80);
    c.adauga_numar(PENTRU_ORICINE, "LEI,TIGRI,ELEFANTI");


    Teatru t("Putin teatru", 100, PENTRU_ADULTI, "drama", INTERACTIV);

//    Ghiseu *ghiseu = Ghiseu::instantiaza();
//
//    ghiseu->citire_date_spectator();


    Manager *manager = Manager::instantiaza();

    manager->adauga_spectacol(o);
    manager->adauga_spectacol(c);
    manager->adauga_spectacol(t);

//    manager->citeste_din_fisier();

    manager->test();

    //TODO: sa bagi o variabila pentru bilete vandute in Spectacol, cu metode aferente
    //TODO: citirea nu merge foarte bine la ghiseu
    //TODO: cred ca clasa Spectator ar trebui sa fie friend la ghiseu
    return 0;
}

