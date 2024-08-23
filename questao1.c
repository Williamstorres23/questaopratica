#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10; 
    int b = 20; 

    void *endereco_a = (void*)&a;
    void *endereco_b = (void*)&b;

    if (endereco_a > endereco_b) {
        printf("O maior endereço é: %p\n", endereco_a);
    } else {
        printf("O maior endereço é: %p\n", endereco_b);
    }

    return 0;
}