#include <stdio.h>

int ehPrimo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if (ehPrimo(num)) {
        printf("%d é primo\n", num);
    } else {
        printf("%d não é primo\n", num);
    }
    
    return 0;
}
