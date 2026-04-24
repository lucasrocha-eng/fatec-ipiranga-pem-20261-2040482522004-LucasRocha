/*----------------------------------------------------------* 
* FATEC Ipiranga * 
* Disciplina: Programaçao Estruturada e Modular *
* Prof. Veríssimo * 
*-----------------------------------------------------------*
* Objetivo do Programa: Busca em profundidade(iterativo)*
* Data - 24/04/2026 *
* Autor:Lucas Rocha * 
* RA : 004
*-----------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <time.h>

int ciclos = 0;

typedef struct Pasta {
    char nome[50];
    float tamanho_proprio;
    struct Pasta* subpastas[10];
    int qtd_sub;
} Pasta;

float processarIterativo(Pasta* raiz) {
    Pasta* pilha[50];
    int topo = 0;
    float total = 0;

    pilha[topo++] = raiz;

    while (topo > 0) {
        ciclos++; // conta ciclo

        Pasta* atual = pilha[--topo];

        total += atual->tamanho_proprio;

        for (int i = 0; i < atual->qtd_sub; i++) {
            pilha[topo++] = atual->subpastas[i];
        }
    }

    return total;
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

    float total = processarIterativo(&raiz);

    t = clock() - t;
    double tempo = ((double)t) / CLOCKS_PER_SEC;

    printf("\n--- ITERATIVO ---\n");
    printf("Total: %.2f GB\n", total);
    printf("Ciclos: %d\n", ciclos);
    printf("Tempo: %f segundos\n", tempo);

    return 0;
}