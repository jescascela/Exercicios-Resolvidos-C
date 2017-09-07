#include <stdio.h>
#include <stdlib.h>
#include <math.h>//Para uso da função 'pow'

//Protótipos
double avalia(double* poli, int grau, double x);
void imprimePolinomio(double* poli, int grau);

int main()
{
    int i;
    int grau;
    double* poli;
    double x;
    double ret;

    printf("Informe o grau do polinomio: ");
    scanf("%d,",&grau);

    poli = (double*) malloc((grau+1)*sizeof(double));

    printf("Digite os coeficientes do polinomio:\n");

    for(i=0;i<=grau;i++)
    {
        scanf("%lf",&poli[i]);
    }

    imprimePolinomio(poli, grau);

    printf("Informe o valor de x: ");
    scanf("%lf",&x);

    ret = avalia(poli,grau,x);

    printf("Para x = %lf o valor do polinomio e igual a %lf", x, ret);

    printf("\n");

    return 0;
}

double avalia(double* poli, int grau, double x)
{
    int i;
    double valor = 0.0;

    for(i=grau;i>=0;i--)
    {
        if(i!=0)
        {
            valor = valor + poli[i]*pow(x,i);
        }
        else
        {
            valor = valor + poli[i];
        }
    }

    return valor;
}

void imprimePolinomio(double* poli, int grau)
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
