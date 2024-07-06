#include <stdio.h>

int main() {
    float nota1, nota2, media;
    printf("Digite as duas notas do aluno: ");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1 + nota2) / 2.0;

    printf("Média: %.1f\n", media);

    if (media >= 0.0 && media <= 4.9) {
        printf("Conceito: Insuficiente\n");
    } else if (media >= 5.0 && media <= 6.4) {
        printf("Conceito: Regular\n");
    } else if (media >= 6.5 && media <= 8.4) {
        printf("Conceito: Bom\n");
    } else if (media >= 8.5 && media <= 10.0) {
        printf("Conceito: Ótimo\n");
    } else {
        printf("Notas inválidas.\n");
    }

    return 0;
}
