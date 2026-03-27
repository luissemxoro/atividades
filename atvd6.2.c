#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  

int main() {

    srand(time(0)); 
    int numeros[10];
    
    printf("Numeros maiores que 5: ");
    for (int i = 0; i < 10; i++) {
        numeros[i] = rand() % 11; 
        if (numeros[i] > 5) {
            printf("%d ", numeros[i]);
        }
    }

    char sobrenome[] = "caparroz"; 
    
    printf("\nLetras alternadas: ");
    for (int i = 0; sobrenome[i] != '\0'; i += 2) {
        printf("%c", sobrenome[i]);
    }
    printf("\n");

    return 0;
}