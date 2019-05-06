
#include <iostream>
#include "Teatru.h"

Teatru::Teatru(const string &nume, double durata, bool pentruAdulti, const string &gen, bool interactiv) : Spectacol(
        nume, durata, pentruAdulti, gen), interactiv(interactiv) {}

string Teatru::getTip() {
    return "teatru";
}

bool Teatru::isInteractiv() const {
    return interactiv;
}

void Teatru::print_details()
{
    cout << getNume() << " : " << "teatru de " << getGen() << ", " << durata << " minute, ";
    if(pentru_adulti)
        cout << "pentru adulti, ";
    else
        cout << "orice varsta, ";

    if(interactiv)
        cout << "interactiv.";
    else
        cout << "neinteractiv.";
}
