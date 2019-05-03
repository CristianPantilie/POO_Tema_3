
#ifndef POO_TEMA_3_SPECTATOR_H
#define POO_TEMA_3_SPECTATOR_H

#include <string>
#include <vector>
using namespace std;

class Spectator {
private:
    string nume;
    unsigned int varsta;
    vector<string> exigente;
    vector<string> pofte;

    string pofta_gen;  //COMEDIE, DRAMA, ACTIUNE
    string pofta_tip; //TEATRU, OPERA, CIRC
    string pofta_durata_min;
    bool pofta_pauze;
    string pofta_circ_animale;
    string pofta_teatru_interactiv;
    string pofta_opera_voce; //TENOR, BARITON, BASS


    string exigenta_combinatie[2];   //(tip, gen) e.g. opera dramatica
    double exigenta_durata_max;
    bool exigenta_animale;      //periculoase?
    int exigenta_spectatori_max;


    //spectacolul sa fie potrivit pentru categoria de varsta a clientului


    //TODO: trebuie sa poata fi acceptate mai multe din aceeasi chestie la unele, de exemplu exigenta_combinatie

public:
    Spectator(string nume, unsigned int varsta);
    void adauga_pofta(string pofta);
    void adauga_exigenta(string exigenta);
    void afis();

};


#endif //POO_TEMA_3_SPECTATOR_H
