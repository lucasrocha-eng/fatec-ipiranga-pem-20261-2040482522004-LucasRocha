/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Inversao de Arrays com Ponteiros *
* Data - 21/05/2026                                      *
* Autor: Lucas Rocha                                     *
*--------------------------------------------------------*/

#include <stdio.h>

// funcao para inverter o vetor
void inverter(int *arr, int n) {

    int *inicio = arr;
    int *fim = arr + n - 1;

    while(inicio < fim) {

        int temp = *inicio;

        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main() {

    int vetor[7] = {1,2,3,4,5,6,7};

    printf("Antes:\n");

    for(int i = 0; i < 7; i++) {

        printf("%d ", vetor[i]);
    }

    inverter(vetor, 7);

    printf("\n\nDepois:\n");

    for(int i = 0; i < 7; i++) {

        printf("%d ", vetor[i]);
    }

    return 0;
}