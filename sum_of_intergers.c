#include <stdio.h>

int main() {
    int n1, n2, sum;
    
    printf("Digite um número inteiro: \n");
    scanf("%d", &n1);
    
    printf("Digite mais um número inteiro: \n");
    scanf("%d", &n2);
    
    sum = n1 + n2;
    
    printf("A soma dos números é: %d", sum);
    
    printf("\nPressione qualquer tecla para finalizar...");
    getchar();
    
    return 0;
}
