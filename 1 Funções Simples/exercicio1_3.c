#include <stdio.h>

//Protótipo
int fibonacci(int n);

int main()
{
    int n;
    int ret;

    printf("Digite o n-esimo termo da serie de Fibonacci que deja saber: ");
    scanf("%d",&n);

    ret = fibonacci(n);

    printf("O valor e igual a %d", ret);

    return 0;
}

//Considerando que n = 1 é o primeiro termo
int fibonacci(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }

    return (fibonacci(n-1) + fibonacci(n-2));
}
