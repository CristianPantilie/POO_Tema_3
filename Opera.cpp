
#include <iostream>
#include "Opera.h"

Opera::Opera(string sol)
{

    if(sol == "TENOR")
        tip_solist = solist::TENOR;
    else if(sol == "BARITON")
        tip_solist = solist::BARITON;
    else if(sol == "BASS")
        tip_solist = solist::BASS;
    else
        cout << "Tipul solistului invalid";
}

void Opera::afis()
{
    if(tip_solist == solist::TENOR)
        cout << "Tenor";
}
