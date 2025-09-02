//
// Created by Vitor Aguiar Treglia on 31/08/25.
//

#ifndef PESSOA_H
#define PESSOA_H

#include "Universidade.h"

class Pessoa {
private:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP[30];

    Universidade* pUnivFiliado;

public:
    Pessoa(int diaNa, int mesNa, int anoNa, const char* nome = "");
    Pessoa();
    ~Pessoa();
    void inicializa(int diaNa, int mesNa, int anoNa, const char* nome = "");
    void calculaIdade(int diaAT, int mesAT, int anoAT);
    int informaIdade();

    void setUnivFiliado (Universidade* pu);
    void ondeTrabalho();
};



#endif //PESSOA_H
