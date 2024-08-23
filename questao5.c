#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5]; 
    int *ptr = array; 

    
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", ptr + i); 
    }

   
    printf("\nDobro dos valores lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Dobro do valor %d: %d\n", i + 1, 2 * *(ptr + i)); 
    }

    return 0;
}