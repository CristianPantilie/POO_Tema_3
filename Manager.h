
#ifndef POO_TEMA_3_MANAGER_H
#define POO_TEMA_3_MANAGER_H

#include "Spectacol.h"

using namespace std;

//Singleton design pattern

class Manager{
private:
    static Manager *instanta;


    const string FISIER = "../spectacole.txt";

    Manager();  //constructor privat, previne instantierea

    vector<Spectacol> spectacole;  //lista cu spectacole unice, fiecare contine diferitele sale prezentari

    //trebuie sa il faci sa fie de tip Spectacol * si faci cast de fiecare data cand accesezi membrii

    void exista_prezentare();

public:
    static Manager *instantiaza();   //se instantiaza o singura data, folosind metoda asta

//    void citeste_din_fisier();

    void adauga_spectacol(Spectacol s);
    void adauga_prezentare(Spectacol spectacol);

    void vinde_bilet();

    vector<Spectacol> spectacole_valabile();


    void test();

};


#endif //POO_TEMA_3_MANAGER_H
