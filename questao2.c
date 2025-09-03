#include <stdio.h>

int main() {
    int idade;
    int *p = &idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Idade: %d\n", *p);
    printf("Endereco: %p\n", p);

    return 0;
}