
#ifndef POO_TEMA_3_MANAGER_H
#define POO_TEMA_3_MANAGER_H

#include "Spectacol.h"

using namespace std;

//Singleton design pattern

class Manager{
private:
    static Manager *instanta;

    Manager();  //constructor privat, previne instantierea

    vector<Spectacol> spectacole;  //lista cu spectacole unice, fiecare contine diferitele sale prezentari


    void exista_prezentare();

public:
    static Manager *instantiaza();   //se instantiaza o singura data, folosind metoda asta


    void adauga_spectacol();
    void adauga_prezentare(Spectacol spectacol);




};


#endif //POO_TEMA_3_MANAGER_H
