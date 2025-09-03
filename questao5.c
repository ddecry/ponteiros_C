#include <stdio.h>

int main() {
    int notas[6];
    int *p = notas;

    for(int i = 0; i < 6; i++) {
        printf("Nota %d: ", i+1);
        scanf("%d", p+i);
    }

    printf("Notas invertidas:\n");
    for(int i = 5; i >= 0; i--) {
        printf("%d ", *(p+i));
    }

    return 0;
}