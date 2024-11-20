#include <stdio.h>
#include <stdlib.h>
#include <new>

int **alocaMatriz(int a, int b)
{
    int **aux = new int*[a];

    for (int i = 0; i < a; i++)
    {
        aux[i] = new int[b];
        
    }
    return aux;
}

int main()
{
    int a, b, contador, contador1, **ponteiro;
    printf("Quantidade de linhas: ");
    scanf("%d", &a);
    printf("Quantidade de colunas: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0)
    {
        printf("Linhas e colunas devem ser positivos!");
        return (1);
    }

    ponteiro = alocaMatriz(a, b);

    for (contador = 0; contador < a; contador++)
    {
        for (contador1 = 0; contador1 < b; contador1++)
        {
            printf("Digite matriz[%d][%d]: ", contador, contador1);
            scanf("%d", &ponteiro[contador][contador1]);
        }
    }
    for (contador = 0; contador < a; contador++)
    {
        for (contador1 = 0; contador1 < b; contador1++)
        {
            printf("matriz[%d][%d] = %d\n", contador, contador1, ponteiro[contador][contador1]);
        }
    }

    for (contador = 0; contador < a; contador++)
    {
        delete[](ponteiro[contador]);
    }

    delete[](ponteiro);

    return 0;
}