/*----------------------------------------------------------*
* FATEC Ipiranga                                            *
* Disciplina: Programaçao Estruturada e Modular             *
* Prof. Veríssimo                                           *
*-----------------------------------------------------------*
* Objetivo do Programa: Exercício 10                        *
* Data - 28/05/2026                                         *
* Autor: Lucas Rocha                                        *
* RA : 004                                                  *
*-----------------------------------------------------------*/
#include <stdio.h>

void mostrar(int m[4][4]) {

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int m[4][4] = {
        {1,2,3,4},
        {2,1,4,3},
        {5,6,7,8},
        {6,5,8,7}
    };

    mostrar(m);

    int somaP = 0, somaS = 0;

    for(int i = 0; i < 4; i++) {
        somaP += m[i][i];
        somaS += m[i][3-i];
    }

    printf("\nDiagonal principal: %d\n", somaP);
    printf("Diagonal secundaria: %d\n", somaS);

    return 0;
}