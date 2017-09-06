#include <stdio.h>
#include <stdlib.h>

//Prot�tipo
void inverte(int n, int* vet);

int main()
{
    int n;
    int *vet;
    int i;

    printf("Informe o tamanho do vetor: ");
    scanf("%d",&n);

    vet = (int*) malloc(n*sizeof(int));

    printf("Informe os valores do vetor:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&vet[i]);
    }

    printf("Voce criou o seguinte vetor:");

    for(i=0;i<n;i++)
    {
        printf(" %d", vet[i]);
    }

    inverte(n,vet);

    printf("\nO vetor invertido e:");

    for(i=0;i<n;i++)
    {
        printf(" %d", vet[i]);
    }

    return 0;
}

void inverte(int n, int* vet)
{
    int i;
    int j;
    int aux;//Vari�vel auxiliar para guardar valores tempor�rios

    /*
    Aqui basta percorrer at� metade do vetor trocando
    o que est� no final pelo que est� no in�cio.
    */
    for(i=0;i<n/2;i++)
    {
        j = n - 1 - i;
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
    }
}
