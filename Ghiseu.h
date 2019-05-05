
#ifndef POO_TEMA_3_GHISEU_H
#define POO_TEMA_3_GHISEU_H
#include <vector>
#include "Spectacol.h"
#include "Spectator.h"
#include "Manager.h"

using namespace std;

//Singleton design pattern

class Ghiseu{
private:
    static Ghiseu *instanta;

    Ghiseu();  //constructor privat, previne instantierea

    vector<Spectacol *> cauta_exigente(vector<Spectacol *> spectacole, Spectator s);  //prima cautare, cauta din toate spectacolele disponibile
    vector<Spectacol *> cauta_pofte(vector<Spectacol *> spectacole, Spectator s);  //a doua cautare, cauta din rezultatele returnate de prima cautare

    Spectator citire_date_spectator();

    void afisare_spectacole(vector<Spectacol *> spectacole) ;

public:

    static Ghiseu *instantiaza();   //se instantiaza o singura data, folosind metoda asta

    void operatie(Manager *m);

};


#endif //POO_TEMA_3_GHISEU_H
