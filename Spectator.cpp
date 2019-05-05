#include <iostream>
#include "Spectator.h"

Spectator::Spectator(string nume, unsigned int varsta): nume(nume), varsta(varsta)
{
    pofta_durata_min = -1;
    exigenta_durata_max = -1;
    exigenta_spectatori_max = -1;
    pofta_teatru_interactiv = false;
}

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

const string &Spectator::getNume() const {
    return nume;
}

unsigned int Spectator::getVarsta() const {
    return varsta;
}

const vector<string> &Spectator::getPoftaGen() const {
    return pofta_gen;
}

const vector<string> &Spectator::getPoftaTip() const {
    return pofta_tip;
}

double Spectator::getPoftaDurataMin() const {
    return pofta_durata_min;
}

const vector<string> &Spectator::getPoftaCircAnimale() const {
    return pofta_circ_animale;
}

bool Spectator::isPoftaTeatruInteractiv() const {
    return pofta_teatru_interactiv;
}

const vector<string> &Spectator::getPoftaOperaVoce() const {
    return pofta_opera_voce;
}

const vector<string> &Spectator::getExigentaCombinatie() const {
    return exigenta_combinatie;
}

double Spectator::getExigentaDurataMax() const {
    return exigenta_durata_max;
}

const vector<string> &Spectator::getExigentaAnimale() const {
    return exigenta_animale;
}

int Spectator::getExigentaSpectatoriMax() const {
    return exigenta_spectatori_max;
}


