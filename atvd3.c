#include <stdio.h>

// Definimos a estrutura para retornar os dois valores de uma vez
typedef struct {
    int pontosA;
    int pontosB;
} Pontuacao;

Pontuacao avaliarDesempenho(int notasA[], int notasB[]) {
    Pontuacao resultado = {0, 0}; 
    for (int i = 0; i < 3; i++) {
        if (notasA[i] > notasB[i]) {
            resultado.pontosA++;
        } 
        else if (notasB[i] > notasA[i]) {
            resultado.pontosB++;
        }
    }

    return resultado;
}

int main() {

    int funcionarioA[] = {8, 9, 7}; 
    int funcionarioB[] = {7, 9, 10};

    Pontuacao resultado = avaliarDesempenho(funcionarioA, funcionarioB);

    printf("Resultado Final:\n");
    printf("Funcionario A: %d pontos\n", resultado.pontosA);
    printf("Funcionario B: %d pontos\n", resultado.pontosB);

    return 0;
}