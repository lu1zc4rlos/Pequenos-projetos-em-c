#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 100

typedef struct
{
    char nome[TAM];
    int idade;
    float peso;
} Pessoa;

int main()
{
    printf("*********************\n");
    printf("|Cadastro de pessoas|\n");
    printf("*********************\n");

    Pessoa vetor[3];
    for (int cont = 0; cont < 3; cont++)
    {
        printf("Insira os dados da Pessoa %d\n", cont + 1);

        printf("Nome: ");
        fgets(vetor[cont].nome, sizeof(vetor[cont].nome), stdin);
        fflush(stdin);

        printf("Idade: ");
        scanf("%d", &vetor[cont].idade);
        fflush(stdin);

        printf("Peso: ");
        scanf("%f", &vetor[cont].peso);
        fflush(stdin);
    }

    system("CLS");

    for (int cont = 0; cont < 3; cont++)
    {
        printf("--------------pessoa %d--------------", cont+1);
        printf("\nPessoa %d\n", cont + 1);
        printf("Nome: %s", vetor[cont].nome);
        printf("Idade: %d\n", vetor[cont].idade);
        printf("Peso: %.2f\n", vetor[cont].peso);
        
        
    }
    return 0;
}
