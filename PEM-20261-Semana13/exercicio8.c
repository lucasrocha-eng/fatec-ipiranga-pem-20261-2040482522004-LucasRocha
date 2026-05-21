/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Distancia entre Ponteiros        *
* Data - 21/05/2026                                      *
* Autor: Lucas Rocha                                     *
*--------------------------------------------------------*/

#include <stdio.h>

int main() {

    double vetor[10] = {1,2,3,4,5,6,7,8,9,10};

    // ponteiros para posicoes diferentes
    double *p1 = &vetor[2];
    double *p2 = &vetor[7];

    // mostrando a distancia
    printf("Diferenca entre ponteiros: %ld\n", p2 - p1);

    /*
    A diferenca entre os ponteiros mostra
    quantos elementos existem entre eles.
    */

    printf("\nValores:\n");

    while(p1 <= p2) {

        printf("%.2lf\n", *p1);

        p1++;
    }

    return 0;
}