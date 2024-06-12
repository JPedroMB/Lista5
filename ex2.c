#include <stdio.h>
#include <math.h>

int ehArmstrong(int numero) {
    int original = numero;
    int soma = 0;
    
    while (numero > 0) {
        int digito = numero % 10;
        soma += pow(digito, 3);
        numero /= 10;
    }
    
    return (soma == original);
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if (ehArmstrong(num)) {
        printf("%d é um número de Armstrong\n", num);
    } else {
        printf("%d não é um número de Armstrong\n", num);
    }
    
    return 0;
}
