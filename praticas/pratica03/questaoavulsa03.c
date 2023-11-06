#include <stdio.h>

int main() {
    int decimal, binario = 0, base = 1;

    // Solicitar ao usuário para inserir o número decimal
    printf("Digite um número decimal: ");
    scanf("%d", &decimal);

    // Converter o número decimal em binário
    while (decimal > 0) {
        int resto = decimal % 2;
        binario = binario + (resto * base);
        decimal = decimal / 2;
        base = base * 10;
    }

    // Imprimir o número em formato binário
    printf("O número em formato binário é: %d\n", binario);

    return 0;
}
