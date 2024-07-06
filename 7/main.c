#include <stdio.h>

int main() {
    int codigo;
    double preco;

    printf("Por favor, insira o codigo do lanche desejado:\n");
    printf("10 - Xis Completo - R$ 12,00\n");
    printf("11 - Xis Bacon - R$ 16,50\n");
    printf("12 - Xis de Coracao de boi - R$ 14,00\n");
    printf("13 - Xis de Charque - R$ 14,50\n");
    printf("14 - Xis de Ovelha - R$ 20,90\n");
    printf("15 - Xis de linguica campeira - R$ 18,00\n");
    printf("Codigo: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 10:
            preco = 12.00;
            break;
        case 11:
            preco = 16.50;
            break;
        case 12:
            preco = 14.00;
            break;
        case 13:
            preco = 14.50;
            break;
        case 14:
            preco = 20.90;
            break;
        case 15:
            preco = 18.00;
            break;
        default:
            printf("Codigo invalido!\n");
            return 1;
    }

    printf("O valor total do seu lanche : R$ %.2lf\n", preco);
    return 0;
}
