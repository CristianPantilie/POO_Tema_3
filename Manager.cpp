
#include <iostream>
#include <fstream>
#include <typeinfo>
#include "Manager.h"
#include "Opera.h"


Manager *Manager::instanta = nullptr;

Manager::Manager() = default;

Manager *Manager::instantiaza()
{
    if(instanta == nullptr)
        instanta = new Manager();

    return instanta;
}

void Manager::adauga_spectacol(Spectacol *s)
{
    spectacole.push_back(s);
}


vector<Spectacol *> Manager::spectacole_valabile() {
    return spectacole;
}


