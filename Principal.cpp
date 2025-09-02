//
// Created by Vitor Aguiar Treglia on 23/08/25.
//

#include "Principal.h"
#include <time.h>

Principal::Principal() {
    Simao.inicializa(3, 10, 1976, "Jean Simao");
    Einstein.inicializa(14, 3, 1879, "Albert Einstein");
    Newton.inicializa(4, 1, 1643, "Isaac Newton");

    UTFPR.setNome("UTFPR");

    Simao.setUnivFiliado(&UTFPR);

    struct tm *local;
    time_t segundos;
    time(&segundos);
    local = localtime(&segundos);

    diaAtual = local->tm_mday;
    mesAtual = local->tm_mon + 1;
    anoAtual = local->tm_year + 1900;

}

void Principal::Executar() {
    Simao.calculaIdade(diaAtual, mesAtual, anoAtual);
    Einstein.calculaIdade(diaAtual, mesAtual, anoAtual);
    Newton.calculaIdade(diaAtual, mesAtual, anoAtual);
    Simao.informaIdade();

    Simao.ondeTrabalho();
}

