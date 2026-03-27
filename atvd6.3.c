#include <stdio.h>

int main() {
    int idades[] = {15, 22, 33, 40, 51, 18, 27};
    int n = 7;

    printf("Idades impares: ");
    for (int i = 0; i < n; i++) {
        if (idades[i] % 2 != 0) {
            printf("%d ", idades[i]);
        }
    }
    printf("\n");

    return 0;
}