#include <stdio.h>
#include <string.h>

int main() {
    
    char frase[100];
    int i, tamanho;
    int contadorPalavras = 1;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    tamanho = strlen(frase);

    for(i = 0; i < tamanho; i++) {
        if(frase[i] == ' ' && frase[i+1] != ' ' && frase[i+1] != '\0') {
            contadorPalavras++;
        }
    }

    printf("Total de palavras: %d\n", contadorPalavras);

    return 0;
}