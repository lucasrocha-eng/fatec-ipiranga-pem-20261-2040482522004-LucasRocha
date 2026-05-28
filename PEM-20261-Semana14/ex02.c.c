/*----------------------------------------------------------*
* FATEC Ipiranga                                            *
* Disciplina: Programaçao Estruturada e Modular             *
* Prof. Veríssimo                                           *
*-----------------------------------------------------------*
* Objetivo do Programa: Exercício 02                        *
* Data - 28/05/2026                                         *
* Autor: Lucas Rocha                                        *
* RA : 004                                                  *
*-----------------------------------------------------------*/
#include <stdio.h>

int main() {

    int cm;
    float metros;
    double km, milhas;

    printf("Digite a distancia em centimetros: ");
    scanf("%d", &cm);

    if(cm <= 0) {
        printf("Valor invalido\n");
    } else {

        metros = cm / 100.0;
        km = cm / 100000.0;
        milhas = km / 1.60934;

        printf("\nMetros: %.2f", metros);
        printf("\nQuilometros: %.4lf", km);
        printf("\nMilhas: %.4lf\n", milhas);
    }

    return 0;
}