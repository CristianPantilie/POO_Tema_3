
#include "Teatru.h"

Teatru::Teatru(const string &nume, double durata, bool pentruAdulti, const string &gen, bool interactiv) : Spectacol(
        nume, durata, pentruAdulti, gen), interactiv(interactiv) {}

string Teatru::getTip() {
    return "teatru";
}
