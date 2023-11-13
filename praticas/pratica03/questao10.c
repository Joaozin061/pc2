   #include <stdio.h>

   int main() {
     
    int decimal, resto, i = 1;
    int binario[32]; // Armazena o número binário com no máximo 32 bits // 

    printf("Digite um número decimal: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("O número binário é: 0\n");
        return 0;
    }

    if (decimal < 0) {
        printf("Este programa lida apenas com números 
    inteiros positivos.\n");
        return 1;
    }

    while (decimal > 0) {
        resto = decimal % 2;
        binario[i++] = resto;
        decimal /= 
        binario[i++] = 2;
    }

    printf("O número binário é: ");
    for (int j = i - 1; j > 0; j--) {
        printf("%d", binario[j]);
    }
    
   
    printf("\n");

    return 0;
  }