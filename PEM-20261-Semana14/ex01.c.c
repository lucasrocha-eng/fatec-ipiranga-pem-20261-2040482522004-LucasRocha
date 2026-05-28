/*----------------------------------------------------------*
* FATEC Ipiranga                                            *
* Disciplina: Programaçao Estruturada e Modular             *
* Prof. Veríssimo                                           *
*-----------------------------------------------------------*
* Objetivo do Programa: Exercício 01                        *
* Data - 28/05/2026                                         *
* Autor: Lucas Rocha                                        *
* RA : 004                                                  *
*-----------------------------------------------------------*/
#include <stdio.h>

int main() {

    double n1, n2, n3;
    int p1, p2, p3;
    double media;

    printf("Digite nota e peso 1: ");
    scanf("%lf%d", &n1, &p1);

    printf("Digite nota e peso 2: ");
    scanf("%lf%d", &n2, &p2);

    printf("Digite nota e peso 3: ");
    scanf("%lf%d", &n3, &p3);

    media = (n1*p1 + n2*p2 + n3*p3) / (p1+p2+p3);

    printf("\nMedia: %.2lf\n", media);

    printf("sizeof(int): %zu\n", sizeof(int));
    printf("sizeof(double): %zu\n", sizeof(double));

    return 0;
}