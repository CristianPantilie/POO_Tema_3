
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


void Manager::test()
{
    for(auto it = spectacole.begin(); it != spectacole.end(); it++){
        string tip = (*it)->getTip();
        if( tip == "opera")
        {
            cout << "pauza operei" << dynamic_cast<Opera *>((*it))->getPauza();
        }
        else if(tip == "circ")
        {
            cout << "";
        }
        else if(tip == "teatru")
        {
            cout << "";
        }
    }


}

vector<Spectacol *> Manager::spectacole_valabile() {
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
