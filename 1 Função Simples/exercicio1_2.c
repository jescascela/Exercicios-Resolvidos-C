#include <stdio.h>

//Protótipo
int primo(int n);

int main()
{

    int num;
    int ret;

    printf("Digite um numero: ");
    scanf("%d",&num);

    ret = primo(num);

    if(ret == 1)
    {

        printf("O numero %d e primo.\n", num);
    }
    else
    {

        printf("O numero %d NAO e primo.\n", num);
    }

    return 0;
}

//Não foi tratado o caso de números negativos
int primo(int n)
{

    int i;
    int cont = 0;

    //O número 1 não é primo
    if(n == 1)
    {

        return 0;
    }

    for(i = 1; i <= n; i++)
    {

        if(n % i == 0)
        {

            cont ++;
        }

        if(cont > 2)
        {

            return 0;
        }
    }

    return 1;
}
