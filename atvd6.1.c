#include <stdio.h>
int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int n = 5;

    printf("Vetor invertido: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}

