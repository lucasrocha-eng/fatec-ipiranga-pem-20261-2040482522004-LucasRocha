/*-------------------------------------------------------*
*                     FATEC Ipiranga                     *
* Disciplina: Programação Estruturada e Modular          *
*                Professor: Veríssimo                    *
*--------------------------------------------------------*
* Finalidade do Programa: Biblioteca desenvolvida        *
* Data de criação - 14 / 05 / 2026                       *
* Desenvolvedor: Lucas Rocha                             *
*--------------------------------------------------------*/

#include <stdio.h>
#include "interface.h"

// rotina responsável por mostrar o menu de opções
void exibirMenu() {
    printf("Que operacao deseja fazer?\n");
    printf("1. Potenciacao\n");
    printf("2. Converter numero decimal para binario\n");
    printf("3. Somar digitos de um numero\n");
    printf("4. Sair\n");
}

// rotina que captura a opcao escolhida pelo usuario
int escolhaUsuario() {
    int escolha;

    printf("Escolha uma das operacoes: ");
    scanf("%d", &escolha);

    return escolha;
}

// rotina utilizada para receber um valor inteiro
int lerNumero() {
    int numero;
    printf("\nDigite um numero: ");
    scanf("%d", &numero);
    return numero;
}

// rotina destinada a receber o valor do expoente
int lerExpoente() {
    int expoente;
    printf("\nDigite um expoente: ");
    scanf("%d", &expoente);
    return expoente;
}

// rotina que apresenta o resultado da operacao de potencia
void exibirResultadoPotencia(int numero, int expoente, int resultado) {
    printf("\nO resultado de %d elevado a %d e: %d\n", numero, expoente, resultado);
}

// rotina que mostra o resultado da soma dos algarismos
void exibirResultadoSoma(int resultado) {
    printf("\nA soma dos digitos e: %d\n", resultado);
}

// rotina que informa o valor convertido para binario
void exibirMensagemBinario() {
    printf("Esse numero em binario e: ");
}

// rotina exibida ao finalizar o programa
void exibirMensagemSaida() {
    printf("Saindo...\n");
}

// rotina utilizada para avisar sobre opcao incorreta
void exibirMensagemErro() {
    printf("Digite um numero valido!\n");
}

// rotina usada para imprimir o numero zero
void exibirZero() {
    printf("0");
}

// rotina utilizada para quebrar linha na tela
void pularLinha() {
    printf("\n");
}