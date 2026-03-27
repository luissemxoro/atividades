#include <stdio.h>

void encontrarPar(int valores[], int tamanho, int meta) {
    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda < direita) {
        int soma = valores[esquerda] + valores[direita];

        if (soma == meta) {
            printf("Indices encontrados: [%d, %d]\n", esquerda, direita);
            return;
        }

        if (soma < meta) {
            esquerda++; 
        } else {
            direita--;  
        }
    }

    printf("Nenhum par encontrado.\n");
}

int main() {
    int valores[] = {10, 20, 35, 50, 75};
    int tamanho = sizeof(valores) / sizeof(valores[0]);
    int meta = 55;

    encontrarPar(valores, tamanho, meta);

    return 0;
}