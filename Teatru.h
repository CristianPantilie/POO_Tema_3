#ifndef POO_TEMA_3_TEATRU_H
#define POO_TEMA_3_TEATRU_H


#include "Spectacol.h"

class Teatru: public Spectacol {

private:

    bool interactiv;

public:
    Teatru(const string &nume, double durata, bool pentruAdulti, const string &gen, bool interactiv);

    string getTip();

    bool isInteractiv() const;

    void print_details();
};


#endif //POO_TEMA_3_TEATRU_H
