
#ifndef POO_TEMA_3_GHISEU_H
#define POO_TEMA_3_GHISEU_H
#include <vector>
#include "Spectacol.h"

using namespace std;

//Singleton design pattern

class Ghiseu{
private:
    static Ghiseu *instanta;

    Ghiseu();  //constructor privat, previne instantierea

    vector<Spectacol> cauta_exigente();  //prima cautare, cauta din toate spectacolele disponibile
    vector<Spectacol> cauta_preferinte();  //a doua cautare, cauta din rezultatele returnate de prima cautare


public:
    static Ghiseu *instantiaza();   //se instantiaza o singura data, folosind metoda asta

    void citire_date_spectator();

    void afisare_spectacole_potrivite();


};





#endif //POO_TEMA_3_GHISEU_H
