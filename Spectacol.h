
#ifndef POO_TEMA_3_SPECTACOL_H
#define POO_TEMA_3_SPECTACOL_H
#include <string>
#include <list>
#include <iterator>
#include <vector>
#include <map>
using namespace std;

class Spectacol {
private:
    string nume;
    double durata;

    bool pentru_adulti;
    string gen;

    //spectacolele de circ alcatuite din mai multe numere (prestatii)


    struct prezentare{
        unsigned int zi;
        unsigned int luna;
        unsigned int an;
        unsigned int locuri;
    };
    list<struct prezentare> prezentari;

public:
    void adauga_prezentare(unsigned int zi, unsigned int luna, unsigned int an, unsigned int locuri);
    bool exista_prezentare(unsigned int zi, unsigned int luna, unsigned int an);

    Spectacol(const string &nume, double durata, bool pentru_adulti, string gen);




};


#endif //POO_TEMA_3_SPECTACOL_H
