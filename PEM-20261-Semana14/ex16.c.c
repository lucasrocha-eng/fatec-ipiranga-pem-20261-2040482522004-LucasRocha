# ex16.c

/*----------------------------------------------------------*
* FATEC Ipiranga                                            *
* Disciplina: Programaçao Estruturada e Modular             *
* Prof. Veríssimo                                           *
*-----------------------------------------------------------*
* Objetivo do Programa: Exercício 16                        *
* Data - 28/05/2026                                         *
* Autor: Lucas Rocha                                        *
* RA : 004                                                  *
*-----------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscaRec(int *v, int n, int chave) {

    if(n == 0)
        return -1;

    if(v[0] == chave)
        return 0;

    int r = buscaRec(v+1, n-1, chave);

    if(r == -1)
        return -1;

    return r + 1;
}

int somaRec(int *v, int ini, int fim) {

    if(ini == fim)
        return v[ini];

    int meio = (ini + fim) / 2;

    return somaRec(v, ini, meio) + somaRec(v, meio+1, fim);
}

int main() {

    srand(time(NULL));

    int v[12];

    for(int i = 0; i < 12; i++) {
        v[i] = rand() % 100;
        printf("%d ", v[i]);
    }

    printf("\n\nSoma: %d\n", somaRec(v,0,11));

    int chave;

    printf("Digite valor para busca: ");
    scanf("%d", &chave);

    int r = buscaRec(v,12,chave);

    if(r == -1)
        printf("Nao encontrado\n");
    else
        printf("Encontrado no indice %d\n", r);

    return 0;
}