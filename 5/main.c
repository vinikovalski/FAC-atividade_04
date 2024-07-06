#include <stdio.h>

int main() {
    float num1, num2;
    printf("Digite dois numeros reais: ");
    scanf("%f %f", &num1, &num2);

    if (num1 == num2) {
        printf("Os numeros sao iguais.\n");
    } else {
        printf("Os numeros sao diferentes.\n");
        if (num1 > num2) {
            printf("Maior: %.2f\nMenor: %.2f\n", num1, num2);
        } else {
            printf("Maior: %.2f\nMenor: %.2f\n", num2, num1);
        }
    }

    return 0;
}
