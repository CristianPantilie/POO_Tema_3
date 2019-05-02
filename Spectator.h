
#ifndef POO_TEMA_3_SPECTATOR_H
#define POO_TEMA_3_SPECTATOR_H

#include <string>
#include <vector>
using namespace std;

class Spectator {
private:
    string nume;
    unsigned int varsta;
    vector<string> pofte;
    vector<string> exigente;

    //pofte
    enum gen {COMEDIE, DRAMA, ACTIUNE};
    enum tip {TEATRU, OPERA, CIRC};
    bool pauze;
//    animale vii
    bool teatru_interactiv;
    bool opera_voce;

    //exigente
//    map<string, string> combinatie;
    int durata_max;
    bool animale_vii; //periculoase?
    int spectatori_max;

    //pot exista mai multe exigente de acelasi tip
    //spectacolul sa fie potrivit pentru categoria de varsta a clientului

public:
    Spectator(string nume, unsigned int varsta);
    void adauga_pofta(string pofta);
    void adauga_exigenta(string exigenta);
    void afis();

};


#endif //POO_TEMA_3_SPECTATOR_H
