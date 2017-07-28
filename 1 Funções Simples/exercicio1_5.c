#include <stdio.h>
#include <math.h>//Biblioteca para uso da função pow

//Protótipo
double pi(int n);

int main()
{
    int n;
    double ret;

    printf("Digite o valor de n: ");
    scanf("%d",&n);

    ret = pi(n);

    printf("O valor de pi e aproximadamente: %f", ret);
    return 0;
}

double pi(int n)
{
    int i;
    double total = 0;

    for(i=0;i<=n;i++)
    {
        total = total + 4*(pow(-1,i)/(2*i+1));//Aplicação da fórmula
    }

    return total;
}
