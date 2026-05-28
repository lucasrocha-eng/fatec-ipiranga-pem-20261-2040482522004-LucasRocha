/*----------------------------------------------------------*
* FATEC Ipiranga                                            *
* Disciplina: Programaçao Estruturada e Modular             *
* Prof. Veríssimo                                           *
*-----------------------------------------------------------*
* Objetivo do Programa: Exercício 06                        *
* Data - 28/05/2026                                         *
* Autor: Lucas Rocha                                        *
* RA : 004                                                  *
*-----------------------------------------------------------*/
#include <stdio.h>

int main() {

    int n, passos = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Valor invalido\n");
    } else {

        while(n != 1) {

            printf("%d -> ", n);

            if(n % 2 == 0) {
                n = n / 2;
            } else {
                n = 3 * n + 1;
            }

            passos++;
        }

        printf("1\n");
        printf("Passos: %d\n", passos);
    }

    return 0;
}