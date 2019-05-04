#include <iostream>
#include "Spectator.h"

Spectator::Spectator(string nume, unsigned int varsta): nume(nume), varsta(varsta) {}

void Spectator::setPoftaGen(string gen)
{
    pofta_gen.push_back(gen);
}

void Spectator::setPoftaTip(string tip)
{
    pofta_tip.push_back(tip);
}

void Spectator::setPoftaDurataMin(double durata) {
    pofta_durata_min = durata;
}

void Spectator::setPoftaCircAnimale(string animal) {
    pofta_circ_animale.push_back(animal);
}

void Spectator::setPoftaTeatruInteractiv(bool interactiv) {
    pofta_teatru_interactiv = interactiv;
}

void Spectator::setPoftaOperaVoce(string voce) {
    pofta_opera_voce.push_back(voce);
}

void Spectator::setExigentaCombinatie(string tip, string gen) {
    exigenta_combinatie.push_back(tip);
    exigenta_combinatie.push_back(gen);
}

void Spectator::setExigentaDurataMax(double exigentaDurataMax) {
    exigenta_durata_max = exigentaDurataMax;
}

void Spectator::setExigentaAnimale(string exigentaAnimale) {
    exigenta_animale.push_back(exigentaAnimale);
}

void Spectator::setExigentaSpectatoriMax(int exigentaSpectatoriMax) {
    exigenta_spectatori_max = exigentaSpectatoriMax;
}


