#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n <= 10) {
        printf("F1\n");
    } else if (n > 10 && n <= 100) {
        printf("F2\n");
    } else if (n > 100) {
        printf("F3\n");
    }

    return 0;
}
