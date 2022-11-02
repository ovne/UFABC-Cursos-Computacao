// Escreva um programa que leia os dados de um time de futebol e armazene em uma estrutura struct TimeFutebol.
// Após preencher os dados, chame a função imprimir e passe a estrutura preenchida. 
// Essa função, que já está implementada no sistema de correção automática, irá imprimir os dados do time de
// futebol.

#include <stdlib.h>
#include <stdio.h>
//#include "estruturas.h"

struct TimeFutebol {
    char *nome;
    int pontos;
    int gols;
    int vitorias;
    int derrotas;
    int empates;
};

void imprimir(struct TimeFutebol dados_time){
    printf("Time:%s pontos:%d gols:%d vitorias:%d derrotas:%d empates:%d\n",
    dados_time.nome,
    dados_time.pontos,
    dados_time.gols,
    dados_time.vitorias,
    dados_time.derrotas,
    dados_time.empates);
}

int main() {
    struct TimeFutebol meuTime;

    scanf("%s", meuTime.nome);
    scanf("%d", &meuTime.pontos);
    scanf("%d", &meuTime.gols);
    scanf("%d", &meuTime.vitorias);
    scanf("%d", &meuTime.derrotas);
    scanf("%d", &meuTime.empates);

    imprimir(meuTime);
}