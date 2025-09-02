//
// Created by Vitor Aguiar Treglia on 31/08/25.
//

#include "Pessoa.h"
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, const char *nome) {
    inicializa(diaNa, mesNa, anoNa, nome);
}

Pessoa::Pessoa() {
    inicializa(0, 0, 0);
}

Pessoa::~Pessoa() {
}


void Pessoa::inicializa(int diaNa, int mesNa, int anoNa, const char *nome) {
    idadeP = 0;
    diaP = diaNa;
    anoP = anoNa;
    mesP = mesNa;
    strcpy(nomeP, nome);
}


void Pessoa::calculaIdade(int diaAT, int mesAT, int anoAT) {
    idadeP = anoAT - anoP;
    if (mesP > mesAT)
        idadeP = idadeP - 1;
    else if (mesP == mesAT && diaP > diaAT)
        idadeP = idadeP - 1;
    cout << "A idade de " << nomeP << " eh " << idadeP << endl;
}

int Pessoa::informaIdade() {
    return idadeP;
}

void Pessoa::setUnivFiliado(Universidade *pu) {
    pUnivFiliado = pu;
}

void Pessoa::ondeTrabalho() {
    cout << nomeP << " trabalha para a " << pUnivFiliado->getNome() << endl;
}




