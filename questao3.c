#include <stdio.h>
#include <stdlib.h>

int main() {
    float array[10]; 

    
    for (int i = 0; i < 10; i++) {
        array[i] = i * 1.1; 
    }

    
    for (int i = 0; i < 10; i++) {
        printf("Endereço do elemento %d: %p\n", i, (void*)&array[i]);
    }

    return 0;
}