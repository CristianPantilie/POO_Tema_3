
#include "Manager.h"


Manager *Manager::instanta = nullptr;

Manager::Manager() = default;

Manager *Manager::instantiaza()
{
    if(instanta == nullptr)
        instanta = new Manager();

    return instanta;
}
