#include <stdio.h>
#include <stdlib.h>

//Protóripos
void deriva(double* poli, int grau, double* out);
void imprimePolinomioPoli(double* poli, int grau);
void imprimePolinomioOut(double* out, int grau);

int main()
{
    double* poli;
    double* out;
    int grau;
    int i;

    printf("Informe o grau do polinomio: ");
    scanf("%d",&grau);

    poli = (double*) malloc((grau+1)*sizeof(double));
    out = (double*) malloc(grau*sizeof(double));

    printf("Informe os valores dos coeficientes:\n");

    for(i=0;i<=grau;i++)
    {
        scanf("%lf",&poli[i]);
    }

    imprimePolinomioPoli(poli,grau);

    deriva(poli,grau,out);

    imprimePolinomioOut(out,grau-1);


    return 0;
}

void deriva(double* poli, int grau, double* out)
{
    int i;

    for(i=grau;i>=0;i--)
    {
        if(i!=0)
        {
            out[i-1] = poli[i]*i;
        }
    }

}

void imprimePolinomioPoli(double* poli, int grau)
{
    int i;

    printf("Voce montou o seguinte polinomio:");

    for(i=grau;i>=0;i--)
    {
        if(i!=0)
        {
            printf(" %lfx^%d",poli[i],i);
        }
        else
        {
            printf(" %lf",poli[i]);
        }
    }

    printf("\n");
}

void imprimePolinomioOut(double* out, int grau)
{
    int i;

    printf("O polinomio resultante e igual a:");

    for(i=grau;i>=0;i--)
    {
        if(i!=0)
        {
            printf(" %lfx^%d",out[i],i);
        }
        else
        {
            printf(" %lf",out[i]);
        }
    }
}
