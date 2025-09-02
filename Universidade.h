//
// Created by Vitor Aguiar Treglia on 01/09/25.
//

#ifndef UNIVERSIDADE_H
#define UNIVERSIDADE_H



class Universidade {
private:
    char nome[30];

public:
    Universidade(const char* n = "");
    ~Universidade();
    void setNome(const char* n);
    char* getNome();
};



#endif //UNIVERSIDADE_H
