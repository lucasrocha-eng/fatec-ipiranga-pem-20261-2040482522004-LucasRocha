/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Modificacao indireta com ponteiro*
* Data - 21/05/2026                                      *
* Autor: Lucas Rocha                                     *
*--------------------------------------------------------*/

#include <stdio.h>

int main() {

    int vetor[5] = {1, 2, 3, 4, 5};

    // ponteiro para o vetor
    int *p = vetor;

    printf("Vetor antes:\n");

    for(int i = 0; i < 5; i++) {

        printf("%d ", *(p + i));
    }

    // multiplicando os valores por 2
    for(int i = 0; i < 5; i++) {

        *(p + i) = *(p + i) * 2;
    }

    printf("\n\nVetor depois:\n");

    for(int i = 0; i < 5; i++) {

        printf("%d ", *(p + i));
    }

    return 0;
}