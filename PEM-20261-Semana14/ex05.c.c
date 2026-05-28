/*----------------------------------------------------------*
* FATEC Ipiranga *
* Disciplina: Programaçao Estruturada e Modular *
* Prof. Veríssimo *
*-----------------------------------------------------------*
* Objetivo do Programa: Exercício 05 *
* Data - 28/05/2026 *
* Autor: Lucas Rocha *
* RA : 004 *
*-----------------------------------------------------------*/
#include <stdio.h>

int main() {

    int i;
    char op;

    do {

        for(i = 1; i <= 10; i++) {

            int j = 1;

            while(j <= 10) {
                printf("%2d x %2d = %3d\n", i, j, i*j);
                j++;
            }

            printf("\n");
        }

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &op);

    } while(op != 'N' && op != 'n');

    return 0;
}