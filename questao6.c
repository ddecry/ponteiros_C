#include <stdio.h>

int main() {
    int notas[3][3];
    int *p = &notas[0][0], soma = 0;

    for(int i = 0; i < 9; i++) {
        printf("Nota %d: ", i+1);
        scanf("%d", p+i);
    }

    printf("Matriz:\n");
    for(int i = 0; i < 9; i++) {
        printf("%d ", *(p+i));
        if((i+1) % 3 == 0) printf("\n");
    }

    soma = notas[0][0] + notas[1][1] + notas[2][2];
    printf("Soma diagonal = %d\n", soma);

    return 0;
}