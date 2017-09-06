#include <stdio.h>
#include <stdlib.h>

//Protótipos
int pares(int n, int* vet);

int main()
{
    int n;
    int *vet;
    int i;
    int ret;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    vet = (int*)malloc(n*sizeof(int));

    printf("Digite os valores do vetor:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&vet[i]);
    }

    ret = pares(n,vet);

    printf("O vetor possui %d numero(s) par(es)", ret);

    return 0;
}

int pares(int n, int* vet)
{
    int i;
    int cont = 0;//Conta a quantidade de números pares do vetor

    for(i=0;i<n;i++)
    {
        if(vet[i] % 2 == 0)
        {
            cont++;
        }
    }

    return cont;
}
