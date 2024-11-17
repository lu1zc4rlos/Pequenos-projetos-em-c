#include <stdio.h>
#include <stdlib.h>
#include <new>

int main(){
    int contador, a, *ponteiro;
    printf("Por favor, digite o tamanho do vetor: ");
    scanf("%d", &a);

    ponteiro = new int[a];

    for(contador=0;contador<a;contador++){
        printf("Digite o valor de vetor[%d]: ", contador);
        scanf("%d", &ponteiro[contador]);
    }

    for(contador=0;contador<a;contador++){
        printf("vetor[%d] = %d\n", contador,ponteiro[contador]);
    }


    return 0;
}