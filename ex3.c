#include <stdio.h>

int fatorial(int numero) {
    int resultado = 1;
    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    
    int resultado = fatorial(num);
    printf("O fatorial de %d é %d\n", num, resultado);
    
    return 0;
}
