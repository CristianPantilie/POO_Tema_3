
#include <iostream>
#include <fstream>
#include "Manager.h"


Manager *Manager::instanta = nullptr;

Manager::Manager() = default;

Manager *Manager::instantiaza()
{
    if(instanta == nullptr)
        instanta = new Manager();

    return instanta;
}

void Manager::adauga_spectacol(Spectacol s)
{
    spectacole.push_back(s);
}


void Manager::test()
{
    for(auto it = spectacole.begin(); it != spectacole.end(); it++){
        cout << it->nume;
    }

}

vector<Spectacol> Manager::spectacole_valabile()
{
    return spectacole;
}

//void Manager::citeste_din_fisier()
//{
//    string line;
//    ifstream f(FISIER);
//    if(f.is_open())
//    {
//        while(getline(f, line))
//        {
//            for(auto it = line[0]; it != ';'; it++)
//            {
//
//            }
//        }
//        f.close();
//    }
//    else
//        cout << "Unable to open file";
//}
