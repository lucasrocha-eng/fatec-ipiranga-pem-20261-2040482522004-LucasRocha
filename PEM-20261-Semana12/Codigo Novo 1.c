/*----------------------------------------------------------* 
* FATEC Ipiranga * 
* Disciplina: Programaçao Estruturada e Modular *
* Prof. Veríssimo * 
*-----------------------------------------------------------*
* Objetivo do Programa: Busca em profundidade(alterado recusivo e ponteiro)*
* Data - 24/04/2026 *
* Autor:Lucas Rocha * 
* RA : 004
*-----------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <time.h>

#define LIMITE_ALERTA 300.0

int ciclos = 0; // contador de ciclos

typedef struct Pasta {
    char nome[50];
    float tamanho_proprio;
    float tamanho_total;
    struct Pasta* subpastas[10];
    int qtd_sub;
} Pasta;

float processar(Pasta* p, int nivel) {
    if (p == NULL) return 0;

    ciclos++; // conta ciclo

    p->tamanho_total = p->tamanho_proprio;

    for (int i = 0; i < p->qtd_sub; i++) {
        p->tamanho_total += processar(p->subpastas[i], nivel + 1);
    }

    return p->tamanho_total;
}

int main() {
    Pasta raiz, projetos, backups, videos;

    strcpy(raiz.nome, "RAIZ");
    raiz.tamanho_proprio = 10;
    raiz.qtd_sub = 2;

    strcpy(projetos.nome, "Projetos_TI");
    projetos.tamanho_proprio = 50;
    projetos.qtd_sub = 1;

    strcpy(backups.nome, "Backups_Antigos");
    backups.tamanho_proprio = 350;
    backups.qtd_sub = 0;

    strcpy(videos.nome, "Videos_Aulas");
    videos.tamanho_proprio = 280;
    videos.qtd_sub = 0;

    raiz.subpastas[0] = &projetos;
    raiz.subpastas[1] = &backups;

    projetos.subpastas[0] = &videos;

    clock_t t;
    t = clock();

    processar(&raiz, 0);

    t = clock() - t;
    double tempo = ((double)t) / CLOCKS_PER_SEC;

    printf("\n--- RECURSIVO ---\n");
    printf("Total: %.2f GB\n", raiz.tamanho_total);
    printf("Ciclos: %d\n", ciclos);
    printf("Tempo: %f segundos\n", tempo);

    return 0;
}