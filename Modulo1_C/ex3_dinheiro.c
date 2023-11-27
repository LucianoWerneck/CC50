#include <stdio.h>

int main() {
    float troco;
    int centavos, moedas25, moedas10, moedas5, moedas1;

    // Solicitar o valor do troco ao usuário
    printf("Digite o valor do troco: ");
    
    // Verificar se o valor inserido é um número válido
    while (scanf("%f", &troco) != 1 || troco < 0) {
        printf("Valor invalido. Por favor, digite um valor não negativo: ");
        while (getchar() != '\n'); // Limpar o buffer de entrada
    }

    // Converter o valor para centavos
    centavos = (float)(troco * 100);

    // Calcular o número de moedas de 25, 10, 5 e 1 centavo
    moedas25 = centavos / 25;
    centavos %= 25;

    moedas10 = centavos / 10;
    centavos %= 10;

    moedas5 = centavos / 5;
    centavos %= 5;

    moedas1 = centavos;

    // Exibir o resultado
    printf("\nTroco em moedas:\n");
    printf("Moedas de 25 centavos: %d\n", moedas25);
    printf("Moedas de 10 centavos: %d\n", moedas10);
    printf("Moedas de 5 centavos: %d\n", moedas5);
    printf("Moedas de 1 centavo: %d\n", moedas1);

    return 0;
    }