#include <stdio.h>
#include <stdlib.h>

int conta_divisores(n){
    int d = 0;
    for (int i = 1; i<=n; i++){
        if (n%i == 0){
            d++;
        }
    }
    return d;
}

int main()
{
    int n = 1;
    int vet[999];
    int i = 0;
    while (n > 0){
        printf("Digite um valor: ");
        scanf("%d", &n);
        vet[i] = n;
        i++;
    }
    for (int d = 0; d<i; d++){
        int r = conta_divisores(vet[d]);
        if (r == 2){
            printf("%d ", vet[d]);
        }
    }
}
