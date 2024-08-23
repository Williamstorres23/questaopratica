#include <stdio.h>
#include <stdlib.h>

int main() {
    int var1, var2;
    int *ptr1, *ptr2;

   
    printf("Digite o valor para a primeira variável: ");
    scanf("%d", &var1);
    
    printf("Digite o valor para a segunda variável: ");
    scanf("%d", &var2);
    
    ptr1 = &var1;
    ptr2 = &var2;
    
    if (ptr1 > ptr2) {
        printf("O endereço da primeira variável é maior.\n");
        printf("Conteúdo do maior endereço (var1): %d\n", *ptr1);
    } else {
        printf("O endereço da segunda variável é maior.\n");
        printf("Conteúdo do maior endereço (var2): %d\n", *ptr2);
    }

    return 0;
}