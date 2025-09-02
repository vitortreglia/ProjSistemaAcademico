//
// Created by Vitor Aguiar Treglia on 01/09/25.
//

#include "Universidade.h"

#include <string.h>

Universidade::Universidade(const char *n) {
    strcpy(nome, n);
}

Universidade::~Universidade() {
}

void Universidade::setNome(const char *n) {
    strcpy(nome, n);
}

char *Universidade::getNome() {
    return nome;
}



