#include <stdio.h>

int main() {
    float preco[5];
    float *p = preco;

    for(int i = 0; i < 5; i++) {
        printf("Preco %d: ", i+1);
        scanf("%f", &preco[i]);
    }

    for(int i = 0; i < 5; i++) {
        printf("Produto %d = %.2f | Desconto = %.2f\n", i+1, *(p+i), *(p+i)*0.9);
    }

    return 0;
}