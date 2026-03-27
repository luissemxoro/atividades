#include <stdio.h>
int maiorSomaConsecutiva(int valores[], int tamanho) {
    if (tamanho < 2) return 0;

    int maximo = 0;
    for (int i = 0; i < tamanho - 1; i++) {
        int somaAtual = valores[i] + valores[i + 1];

        if (somaAtual > maximo) {
            maximo = somaAtual;
        }
    }

    return maximo;
}
int main() {
    int valores[] = {120, 150, 80, 200, 300, 250};
    int tamanho = sizeof(valores) / sizeof(valores[0]);

    int resultado = maiorSomaConsecutiva(valores, tamanho);

    printf("A maior soma de valores consecutivos e: %d\n", resultado);

    return 0;
}