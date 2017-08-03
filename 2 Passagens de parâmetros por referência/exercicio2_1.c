#include <stdio.h>
#include <math.h>//Para uso das funções 'pow' e 'sqrt'

//Protótipo
int raizes(float a, float b, float c, float* x1, float* x2);

int main()
{
    float a;//ax^2
    float b;//bx
    float c;//c
    float x1;
    float x2;
    int ret;

    printf("Digite o valor de a: ");
    scanf("%f",&a);

    printf("Digite o valor de b: ");
    scanf("%f",&b);

    printf("Digite o valor de c: ");
    scanf("%f",&c);

    ret = raizes(a,b,c,&x1,&x2);

    if(ret == 1)
    {
        printf("As raizes sao x1 = %f e x2 = %f", x1, x2);
    }
    else
    {
        if(ret == 2)
        {
            printf("As raizes sao x1 = x2 = %f", x1);
        }
        else
        {
            printf("A equacao nao possui raizes reais");
        }
    }

    return 0;
}

int raizes(float a, float b, float c, float* x1, float* x2)
{
    float delta;

    delta = pow(b,2) - 4*a*c;//Fórmula do delta

    if(delta > 0)
    {
        (*x1) = (-b+sqrt(delta))/(2*a);
        (*x2) = (-b-sqrt(delta))/(2*a);

        return 1;
    }

    if(delta == 0)
    {
        (*x1) = (-b+sqrt(delta))/(2*a);
        (*x2) = (-b-sqrt(delta))/(2*a);

        return 2;
    }


    return 0;//Se delta for negativo
}
