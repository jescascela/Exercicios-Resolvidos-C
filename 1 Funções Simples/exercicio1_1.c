#include <stdio.h>

//Protótipo
int dentro_ret(int x0, int y0, int x1, int y1, int x, int y);

int main()
{
    int x0, y0, x1, y1, x, y;
    int ret;//Recebe o retorno da função dentro_ret

    printf("Digite as coordenadas do retangulo\n");

    printf("x0: ");
    scanf("%d",&x0);
    printf("y0: ");
    scanf("%d",&y0);
    printf("x1: ");
    scanf("%d",&x1);
    printf("y1: ");
    scanf("%d", &y1);

    printf("\n");

    printf("Digite as coordenadas do ponto\n");
    printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y);

    ret = dentro_ret(x0, y0, x1, y1, x, y);

    if(ret == 1)
    {

        printf("O ponto esta DENTRO do retangulo\n");
    }
    else
    {

        printf("O ponto esta FORA do retangulo\n");
    }

    return 0;
}

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y)
{
    if((x > x0 && y > y0) && (x < x1 && y <y1))
    {
        return 1;
    }

    return 0;
}
