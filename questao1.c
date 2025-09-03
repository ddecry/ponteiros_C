#include <stdio.h>

int main() {
    int cofrinho = 200;
    int *p = &cofrinho;

    printf("Valor: %d\n", *p);
    printf("Endereco: %p\n", p);

    return 0;
}