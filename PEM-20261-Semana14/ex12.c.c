/*----------------------------------------------------------*
* FATEC Ipiranga                                            *
* Disciplina: Programaçao Estruturada e Modular             *
* Prof. Veríssimo                                           *
*-----------------------------------------------------------*
* Objetivo do Programa: Exercício 12                        *
* Data - 28/05/2026                                         *
* Autor: Lucas Rocha                                        *
* RA : 004                                                  *
*-----------------------------------------------------------*/
#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void minMax(int *v, int n, int *min, int *max) {

    *min = v[0];
    *max = v[0];

    for(int i = 1; i < n; i++) {

        if(v[i] < *min)
            *min = v[i];

        if(v[i] > *max)
            *max = v[i];
    }
}

void normalizaVetor(float *v, int n) {

    float maior = v[0];

    for(int i = 1; i < n; i++) {
        if(v[i] > maior)
            maior = v[i];
    }

    for(int i = 0; i < n; i++) {
        v[i] = v[i] / maior;
    }
}

int main() {

    int a = 10, b = 20;

    printf("Antes: %d %d\n", a, b);
    troca(&a, &b);
    printf("Depois: %d %d\n", a, b);

    int v[5] = {4,7,2,9,1};
    int min, max;

    minMax(v, 5, &min, &max);

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    float f[4] = {2,4,8,16};

    normalizaVetor(f, 4);

    printf("\nVetor normalizado:\n");

    for(int i = 0; i < 4; i++) {
        printf("%.2f ", f[i]);
    }

    return 0;
}