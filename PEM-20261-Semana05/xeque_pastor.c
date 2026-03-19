#include <stdio.h>

void mostrarInicio() {
    printf("Jogada 1\n\n");

    printf("TP1 CP1 BP1 DP1 RP1 BP2 CP2 TP2\n");
    printf("PP1 PP2 PP3 PP4 PP5 PP6 PP7 PP8\n\n");

    printf("                PB5\n\n");

    printf("PB1 PB2 PB3 PB4 ... PB6 PB7 PB8\n");
    printf("TB1 CB1 BB1 DB1 RB1 BB2 CB2 TB2\n\n");
}

void jogada2() {
    printf("Jogada 2\n\n");

    printf("TP1 CP1 BP1 DP1 RP1 BP2 CP2 TP2\n");
    printf("PP1 PP2 PP3 PP4 PP5 PP6 PP7 PP8\n\n");

    printf("        PB5\n");
    printf("    BB4\n\n");

    printf("PB1 PB2 PB3 PB4 ... PB6 PB7 PB8\n");
    printf("TB1 CB1 ... DB1 RB1 BB2 CB2 TB2\n\n");
}

void jogada3() {
    printf("Jogada 3\n\n");

    printf("TP1 CP1 BP1 DP1 RP1 BP2 CP2 TP2\n");
    printf("PP1 PP2 PP3 PP4 PP5 PP6 PP7 PP8\n\n");

    printf("        PB5\n");
    printf("    BB4        DB8\n\n");

    printf("PB1 PB2 PB3 PB4 ... PB6 PB7 PB8\n");
    printf("TB1 CB1 ... ... RB1 BB2 CB2 TB2\n\n");
}

void jogada4() {
    printf("Jogada 4 - Xeque Mate\n\n");

    printf("TP1 CP1 BP1 DP1 RP1 BP2 CP2 TP2\n");
    printf("PP1 PP2 PP3 PP4 ... PP6 PP7 PP8\n\n");

    printf("            DB6\n\n");

    printf("PB1 PB2 PB3 PB4 ... PB6 PB7 PB8\n");
    printf("TB1 CB1 ... ... RB1 BB2 CB2 TB2\n\n");
}

int main() {
    mostrarInicio();
    jogada2();
    jogada3();
    jogada4();
    return 0;
}