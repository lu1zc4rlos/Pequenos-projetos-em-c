#include <stdio.h>
#include <stdlib.h>
int *alocaVetor(int a)
{
    int *aux;
    aux = (int *)malloc(a * sizeof(int));
    if(aux==NULL){
        printf("Erro na alocacao de memoria!");
        exit(1);
    }
    return aux;
}
int main()
{
    int a, contador, *ponteiro;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &a);
    ponteiro = alocaVetor(a);
    for (contador = 0; contador < a; contador++)
    {
        printf("Digite o valor de vetor[%d]: ", contador);
        scanf("%d", &ponteiro[contador]);
    }
    for (contador = 0; contador < a; contador++)
    {
        printf("vetor[%d] = %d \n", contador ,ponteiro[contador]);
    }
    free(ponteiro);
    return 0;
}