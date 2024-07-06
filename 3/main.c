#include <stdio.h>

int main() {
    float x, y, z;
    printf("Digite três valores reais para X, Y e Z: ");
    scanf("%f %f %f", &x, &y, &z);

    float soma = x + y;

    if (soma < z) {
        printf("A soma de X e Y é menor que Z.\n");
    } else if (soma > z) {
        printf("A soma de X e Y é maior que Z.\n");
    } else {
        printf("A soma de X e Y é igual a Z.\n");
    }

    return 0;
}
