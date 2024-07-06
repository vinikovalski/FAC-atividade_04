#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b || a == c || b == c) {
        printf("Dois ou mais numeros inseridos são iguais.\n");
    } else {

        if (a > b) { int temp = a; a = b; b = temp; }
        if (a > c) { int temp = a; a = c; c = temp; }
        if (b > c) { int temp = b; b = c; c = temp; }

        printf("Os numeros em ordem crescente sao: %d, %d, %d\n", a, b, c);
    }

    return 0;
}
