#include <stdio.h>

int main() {
    char name[20];
    int born_year, actual_year, age;
    
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Adivinhador de idade\n");
    printf("Desenvolvido por https://ramontrovao.dev\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    
    printf("Qual é o seu primeiro nome? ");
    scanf("%s", &name);

    printf("%s, em qual ano você está? ", name);
    scanf("%d", &actual_year);
    
    printf("%s, em qual ano você nasceu? ", name);
    scanf("%d", &born_year);
    
    age = actual_year - born_year;
    
    printf("%s, se você já fez aniversário, você possui %d anos, não é?", name, age);
    
    printf("\nDigite qualquer tecla para finalizar...");
    getchar();
    
    return 0;
}
