#include <stdio.h>

int quadrado(int numero) {
    return numero * numero;
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    
    int resultado = quadrado(num);
    printf("O quadrado de %d é %d\n", num, resultado);
    
    return 0;
}