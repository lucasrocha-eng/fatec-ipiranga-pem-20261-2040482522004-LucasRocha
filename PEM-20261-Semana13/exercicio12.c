/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Ordenacao por Selecao c/Ponteiros*
* Data - 21/05/2026                                      *
* Autor: Lucas Rocha                                     *
*--------------------------------------------------------*/

#include <stdio.h>

// funcao para trocar os valores
void trocar(int *a, int *b) {

    int temp = *a;

    *a = *b;
    *b = temp;
}

// funcao para imprimir o vetor
void imprimir(int *arr, int n) {

    for(int i = 0; i < n; i++) {

        printf("%d ", *(arr + i));
    }

    printf("\n");
}

// selection sort usando ponteiros
void selectionSort(int *arr, int n) {

    int *i;
    int *j;
    int *menor;

    for(i = arr; i < arr + n - 1; i++) {

        menor = i;

        for(j = i + 1; j < arr + n; j++) {

            if(*j < *menor) {

                menor = j;
            }
        }

        if(menor != i) {

            trocar(i, menor);

            printf("Troca realizada:\n");

            imprimir(arr, n);
        }
    }
}

int main() {

    int vetor[8] = {64, 25, 12, 22, 11, 90, 3, 45};

    printf("Antes da ordenacao:\n");

    imprimir(vetor, 8);

    printf("\nOrdenando:\n");

    selectionSort(vetor, 8);

    printf("\nDepois da ordenacao:\n");

    imprimir(vetor, 8);

    return 0;
}