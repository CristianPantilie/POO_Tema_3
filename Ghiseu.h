
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

    vector<Spectacol> spectacole;

public:
    static Ghiseu *instantiaza();   //se instantiaza o singura data, folosind metoda asta
    void adaugaSpectacol();
};





#endif //POO_TEMA_3_GHISEU_H
