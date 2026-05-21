/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Leitura e Escrita de Struct via  *
* Ponteiro                                               *
* Data - 21/05/2026                                      *
* Autor: Lucas Rocha                                     *
*--------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

// struct do produto
struct Produto {

    char nome[40];
    float preco;
    int estoque;
};

int main() {

    struct Produto produto;

    // ponteiro para a struct
    struct Produto *p = &produto;

    // usando (*p)
    strcpy((*p).nome, "Mouse");
    (*p).preco = 120.50;
    (*p).estoque = 15;

    printf("Usando (*p)\n");

    printf("Nome: %s\n", (*p).nome);
    printf("Preco: %.2f\n", (*p).preco);
    printf("Estoque: %d\n\n", (*p).estoque);

    // usando ->
    strcpy(p->nome, "Teclado");
    p->preco = 200;
    p->estoque = 10;

    printf("Usando ->\n");

    printf("Nome: %s\n", p->nome);
    printf("Preco: %.2f\n", p->preco);
    printf("Estoque: %d\n", p->estoque);

    return 0;
}