
#include "Spectacol.h"

void Spectacol::adauga_prezentare(unsigned int zi, unsigned int luna, unsigned int an, unsigned int locuri)
{
    if(zi < 1 || zi > 31 || luna < 1 || luna > 12)
        return;
    struct prezentare p;
    p.zi = zi;
    p.luna = luna;
    p.an = an;
    p.locuri = locuri;
    prezentari.push_back(p);
}

bool Spectacol::exista_prezentare(unsigned int zi, unsigned int luna, unsigned int an)
{
    auto iter = prezentari.begin();
    while(iter != prezentari.end())
    {
        if(iter->zi == zi && iter->luna == luna && iter->an == an)
            return true;
        iter++;
    }
    return false;
}

Spectacol::Spectacol(const string &nume, double durata, bool pentru_adulti, string gen) : nume(nume), durata(durata),
                                                                                    pentru_adulti(pentru_adulti), gen(gen) {}
