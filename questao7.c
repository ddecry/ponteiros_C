#include <stdio.h>

int main() {
    int pontos[4][4];
    int *p = &pontos[0][0];
    int somaJogador[4] = {0}, somaSet[4] = {0};
    int pares = 0, impares = 0;

    for(int i = 0; i < 16; i++) {
        printf("Ponto %d: ", i+1);
        scanf("%d", p+i);

        if(*(p+i) % 2 == 0) pares++;
        else impares++;

        somaJogador[i/4] += *(p+i);
        somaSet[i%4] += *(p+i);
    }

    printf("\nMatriz:\n");
    for(int i = 0; i < 16; i++) {
        printf("%d ", *(p+i));
        if((i+1)%4==0) printf("\n");
    }

    printf("Pares = %d | Impares = %d\n", pares, impares);

    int melhorJogador = 0, melhorSet = 0;
    for(int i = 1; i < 4; i++) {
        if(somaJogador[i] > somaJogador[melhorJogador]) melhorJogador = i;
        if(somaSet[i] > somaSet[melhorSet]) melhorSet = i;
    }

    printf("Maior pontuacao = Jogador %d\n", melhorJogador+1);
    printf("Set mais disputado = %d\n", melhorSet+1);

    return 0;
}