#include <stdio.h>
#include <stdlib.h>

//Protótipo
int negativos(int n, float* vet);

int main()
{
    float *vet;
    int n;
    int i;
    int ret;

    printf("Informe o tamanho do vetor: ");
    scanf("%d",&n);

    vet = (float*)malloc(n*sizeof(float));

    printf("Informe os valores do vetor:\n");

    for(i=0;i<n;i++)
    {
        scanf("%f",&vet[i]);
    }

    ret = negativos(n,vet);

    printf("O vetor possui %d numero(s) negativo(s)", ret);

    return 0;
}

int negativos(int n, float* vet)
{
    int i;
    int cont = 0;

    for(i=0;i<n;i++)
    {
        if(vet[i] < 0)
        {
            cont++;
        }
    }

    return cont;
}
