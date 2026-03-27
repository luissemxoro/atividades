#include <stdio.h>

int main() {
    char s[] = "luis"; 
    
    int vogais = 0;
    int consoantes = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char atual = s[i];

        if (atual >= 'a' && atual <= 'z') {
            if (atual == 'a' || atual == 'e' || atual == 'i' || 
                atual == 'o' || atual == 'u') {
                ++vogais;
            } 
            else {
                ++consoantes;
            }
        }
    }

    printf("%d %d\n", vogais, consoantes);

    return 0;
}