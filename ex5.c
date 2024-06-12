#include <stdio.h>

int ehPerfeito(int numero) {
    int soma = 0;
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }
    return (soma == numero);
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if (ehPerfeito(num)) {
        printf("%d é um número perfeito\n", num);
    } else {
        printf("%d não é um número perfeito\n", num);
    }
    
    return 0;
}
