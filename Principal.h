//
// Created by Vitor Aguiar Treglia on 23/08/25.
//

#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include "Pessoa.h"


class Principal {
private:
    Pessoa Newton;
    Pessoa Simao;
    Pessoa Einstein;

    Universidade UTFPR;

    int diaAtual;
    int mesAtual;
    int anoAtual;

public:
    Principal();
    void Executar();
};



#endif //PRINCIPAL_H
