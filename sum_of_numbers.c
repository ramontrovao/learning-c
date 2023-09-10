#include <stdio.h>

int main() {
    float n1, n2, sum;
    
    printf("Digite um número: \n");
    scanf("%f", &n1);
    
    printf("Digite mais um número: \n");
    scanf("%f", &n2);
    
    sum = n1 + n2;
    
    printf("A soma dos números é: %.2f", sum);
    
    printf("\nPressione qualquer tecla para finalizar...");
    getchar();
    
    return 0;
}
