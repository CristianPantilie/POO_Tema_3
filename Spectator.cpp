#include <iostream>
#include "Spectator.h"

Spectator::Spectator(string nume, unsigned int varsta): nume(nume), varsta(varsta) {}


void Spectator::afis()
{
    cout << nume << endl << varsta << endl;
    for(auto it = pofte.begin(); it != pofte.end(); it++)
        cout << *it << " ";
}

void Spectator::adauga_pofta(string pofta)
{
    this->pofte.push_back(pofta);
}

void Spectator::adauga_exigenta(string exigenta)
{
    this->pofte.push_back(exigenta);
}
