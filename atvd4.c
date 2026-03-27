#include <stdio.h>

void calcularResultadoRH(int notasA[], int notasB[]) {
    int pontosA = 0;
    int pontosB = 0;

    for (int i = 0; i < 3; i++) {
        if (notasA[i] > notasB[i]) {
            pontosA++; 
        } 
        else if (notasA[i] < notasB[i]) {
            pontosB++;
        }
       
    }
    printf("Resultado: Funcionario A %d ponto, Funcionario B %d ponto\n", pontosA, pontosB);
}

int main() {
    int funcA[] = {8, 7, 9};
    int funcB[] = {6, 7, 10};

    calcularResultadoRH(funcA, funcB);

    return 0;
}