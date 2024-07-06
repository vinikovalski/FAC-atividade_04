#include <stdio.h>

int main() {
    int valor1, valor2;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &valor1, &valor2);

    if (valor1 % valor2 == 0 || valor2 % valor1 == 0) {
        printf("Os números são múltiplos.\n");
    } else {
        printf("Os números não são múltiplos.\n");
    }

    return 0;
}
