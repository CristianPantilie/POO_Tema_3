
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
    string gen;

    struct prezentare{
        unsigned int zi;
        unsigned int luna;
        unsigned int an;
        unsigned int locuri;
        unsigned int locuri_ocupate;
    };

    list<struct prezentare> prezentari;

    friend class Manager;

protected:

    double durata;
    bool pentru_adulti;

public:

    virtual string getTip() = 0;

    const string &getGen() const;

    double getDurata() const;

    const string &getNume() const;

    bool isPentruAdulti() const;

    void adauga_prezentare(unsigned int zi, unsigned int luna, unsigned int an, unsigned int locuri);
    bool exista_prezentare(unsigned int zi, unsigned int luna, unsigned int an);

    void vinde_bilet(unsigned int zi, unsigned int luna, unsigned int an, int varsta);

    void afiseaza_prezentari();

    Spectacol(const string &nume, double durata, bool pentru_adulti, string gen);

    virtual void print_details() = 0;


};


#endif //POO_TEMA_3_SPECTACOL_H
