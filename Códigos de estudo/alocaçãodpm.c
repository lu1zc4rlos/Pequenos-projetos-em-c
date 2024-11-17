#include <stdio.h>
#include <stdlib.h>

int **alocaMatriz(int a, int b)
{
    int **aux = (int **)malloc(a * sizeof(int *));

    if (aux == NULL)
    {
        printf("Erro na alocacao de memoria!");
        exit(1);
    }

    for (int i = 0; i < a; i++)
    {
        aux[i] = (int *)malloc(b * sizeof(int));
        if (aux[i] == NULL)
        {
            printf("Erro na alocacao de memoria!");
            exit(1);
        }
    }

    return aux;
}
int main()
{
    int a, b, contador, contador1, **ponteiro;
    printf("Linhas da matriz: ");
    scanf("%d", &a);
    printf("Colunas da matriz: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0)
    {
        printf("Linhas e colunas devem ser positivas!");
        return 1;
    }

    ponteiro = alocaMatriz(a, b);

    for (contador = 0; contador < a; contador++)
    {
        for (contador1 = 0; contador1 < b; contador1++)
        {
            printf("Digite o valor de matriz[%d][%d]: ", contador, contador1);
            scanf("%d", &ponteiro[contador][contador1]);
        }
    }

    for (contador = 0; contador < a; contador++)
    {
        for (contador1 = 0; contador1 < b; contador1++)
        {
            printf("Matriz[%d][%d]: %d\n", contador, contador1, ponteiro[contador][contador1]);
        }
    }

    for (contador = 0; contador < a; contador++)
    {
        free(ponteiro[contador]);
    }

    free(ponteiro);
    return 0;
}