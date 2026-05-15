/*-------------------------------------------------------*
*                     FATEC Ipiranga                     *
* Disciplina: Programação Estruturada e Modular          *
*                Professor: Veríssimo                    *
*--------------------------------------------------------*
* Descrição do Projeto: Biblioteca personalizada         *
* Data de elaboração - 14 / 05 / 2026                    *
* Criado por: Lucas Rocha                                *
*--------------------------------------------------------*/

#include <stdio.h>
#include "recursao.h"

// rotina responsável pela conversão de decimal para binário
void decToBin(int n) {

    // condição de parada da recursão
    if(n == 0) {
        return;
    } 

    // realiza a divisão antes da impressão para inverter a ordem correta
    decToBin(n / 2);

    // mostra o resto da divisão por 2
    printf("%d", n%2);
}

int potencia(int base, int exp) {

    // qualquer número elevado a zero resulta em 1
    if (exp == 0) {
        return 1;
    }

    // condição básica da recursividade
    if (exp == 1) {
        return base;
    }

    // chamada recursiva para calcular a potência
    return base * potencia(base, exp-1);
}

int somaDigitos(int n) {

    // tratamento para valores negativos
    if (n < 0) {

        // transforma o número em positivo
        n = -n;
    }

    // condição de encerramento da recursão
    if (n == 0) {
        return 0;
    }

    // separa os algarismos usando módulo 10 e soma recursivamente
    return n % 10 + somaDigitos(n/10);
}