/*----------------------------------------------------------*
* FATEC Ipiranga                                            *
* Disciplina: Programaçao Estruturada e Modular             *
* Prof. Veríssimo                                           *
*-----------------------------------------------------------*
* Objetivo do Programa: Exercício 03                        *
* Data - 28/05/2026                                         *
* Autor: Lucas Rocha                                        *
* RA : 004                                                  *
*-----------------------------------------------------------*/
#include <stdio.h>

int main() {

    double peso, altura, imc;

    printf("Digite peso e altura: ");
    scanf("%lf%lf", &peso, &altura);

    if(peso <= 0 || altura <= 0) {
        printf("Valores invalidos\n");
    } else {

        imc = peso / (altura * altura);

        printf("\nIMC: %.2lf\n", imc);

        if(imc < 18.5) {
            printf("Abaixo do peso\n");
        } else if(imc >= 18.5 && imc < 25) {
            printf("Peso normal\n");
        } else if(imc >= 25 && imc < 30) {
            printf("Sobrepeso\n");
        } else {
            printf("Obesidade\n");
        }
    }

    return 0;
}