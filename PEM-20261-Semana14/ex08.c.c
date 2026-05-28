/*----------------------------------------------------------*
* FATEC Ipiranga                                            *
* Disciplina: Programaçao Estruturada e Modular             *
* Prof. Veríssimo                                           *
*-----------------------------------------------------------*
* Objetivo do Programa: Exercício 08                        *
* Data - 28/05/2026                                         *
* Autor: Lucas Rocha                                        *
* RA : 004                                                  *
*-----------------------------------------------------------*/
#include <stdio.h>
#define N 8

int main() {

    int v[N], inv[N];
    int maior, menor;
    int iMaior = 0, iMenor = 0;
    int pares = 0, impares = 0;
    int busca, encontrado = -1;

    for(int i = 0; i < N; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &v[i]);

        if(i == 0) {
            maior = menor = v[i];
        }

        if(v[i] > maior) {
            maior = v[i];
            iMaior = i;
        }

        if(v[i] < menor) {
            menor = v[i];
            iMenor = i;
        }

        if(v[i] % 2 == 0)
            pares++;
        else
            impares++;

        inv[N-1-i] = v[i];
    }

    printf("\nMaior: %d no indice %d\n", maior, iMaior);
    printf("Menor: %d no indice %d\n", menor, iMenor);
    printf("Pares: %d\n", pares);
    printf("Impares: %d\n", impares);

    printf("\nVetor invertido:\n");
    for(int i = 0; i < N; i++) {
        printf("%d ", inv[i]);
    }

    printf("\n\nDigite valor para busca: ");
    scanf("%d", &busca);

    for(int i = 0; i < N; i++) {
        if(v[i] == busca) {
            encontrado = i;
            break;
        }
    }

    if(encontrado != -1)
        printf("Encontrado no indice %d\n", encontrado);
    else
        printf("Valor nao encontrado\n");

    return 0;
}