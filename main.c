#include <stdio.h>

int main() {
    int y, n, i, j;
    printf("Introduza o numero de linhas: ");
    scanf("%d",&y);
    n= y - 1;

    for(i = 0; i <= n; i++) {
        for(j = 0; j <= n-i; j++)
            printf("  ");

        for(j = 0; j <= i; j++)
            printf(" %3d", combinacoes(i, j));

        printf("\n");
    }
    return 0;
}


int factorial(int n) {
    int f;
    for(f = 1; n > 1; n--)
        f *= n;  //essencialmente 4*4 4*3 4*2 4*1 STOP (formula do fatorial n!)
    return f;
}

int combinacoes(int n,int k) {
    return factorial(n) / (factorial(k) * factorial(n-k));
}
