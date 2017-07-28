#include <stdio.h>

//Protótipo
int soma_impares(int n);

int main()
{
    int n;
    int ret;

    printf("Digite o valor de n: ");
    scanf("%d",&n);

    ret = soma_impares(n);

    printf("O valor da soma e igual a %d", ret);

    return 0;
}

int soma_impares(int n)
{
    int cont = 0;
    int numero = 1;
    int total = 0;//Acumula a soma dos ímpares

    while(cont != n)
    {
        total = total + numero;
        numero = numero + 2;
        cont++;
    }

    return total;
}
