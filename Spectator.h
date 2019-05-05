
#ifndef POO_TEMA_3_SPECTATOR_H
#define POO_TEMA_3_SPECTATOR_H

#include <string>
#include <vector>
using namespace std;

class Spectator {
private:
    string nume;
    unsigned int varsta;

    vector<string> pofta_gen;  //COMEDIE, DRAMA, ACTIUNE
    vector<string> pofta_tip; //TEATRU, OPERA, CIRC
    double pofta_durata_min;
    vector<string> pofta_circ_animale;
    bool pofta_teatru_interactiv;   //daca e false atunci merge orice fel de teatru
    vector<string> pofta_opera_voce; //TENOR, BARITON, BASS


    vector<string> exigenta_combinatie;   //(tip, gen) tipul pe pozitia para urmat de genul pe pozitia impara
    double exigenta_durata_max;
    vector<string> exigenta_animale;      //periculoase?
    int exigenta_spectatori_max;


    //TODO: spectacolul sa fie potrivit pentru categoria de varsta a clientului


public:
    Spectator(string nume, unsigned int varsta);

    void setPoftaGen(string gen);

    void setPoftaTip(string tip);

    void setPoftaDurataMin(double durata);

    void setPoftaCircAnimale(string animal);

    void setPoftaTeatruInteractiv(bool interactiv);

    void setPoftaOperaVoce(string voce);

    void setExigentaCombinatie(string tip, string gen);

    void setExigentaDurataMax(double exigentaDurataMax);

    void setExigentaAnimale(string exigentaAnimale);

    void setExigentaSpectatoriMax(int exigentaSpectatoriMax);

    const string &getNume() const;

    unsigned int getVarsta() const;

    const vector<string> &getPoftaGen() const;

    const vector<string> &getPoftaTip() const;

    double getPoftaDurataMin() const;

    const vector<string> &getPoftaCircAnimale() const;

    bool isPoftaTeatruInteractiv() const;

    const vector<string> &getPoftaOperaVoce() const;

    const vector<string> &getExigentaCombinatie() const;

    double getExigentaDurataMax() const;

    const vector<string> &getExigentaAnimale() const;

    int getExigentaSpectatoriMax() const;

};


#endif //POO_TEMA_3_SPECTATOR_H
