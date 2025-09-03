#include <stdio.h>

int main() {
    int n, total = 0;
    printf("Quantidade de funcionarios: ");
    scanf("%d", &n);

    int horas[n];
    int *p = horas;

    for(int i = 0; i < n; i++) {
        printf("Horas do funcionario %d: ", i+1);
        scanf("%d", p+i);
        total += *(p+i);
    }

    printf("Total de horas = %d\n", total);
    return 0;
}