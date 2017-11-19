#include <stdio.h>

typedef struct ponto
{
    float x;
    float y;
}Ponto;

//Protótipo
int dentroRet(Ponto* v1, Ponto* v2, Ponto* p);

int main()
{
    Ponto v1;
    Ponto v2;
    Ponto p;
    int ret;

    printf("Digite as coordenadas do ponto v1 (x y): ");
    scanf("%f %f", &v1.x, &v1.y);

    printf("Digite as coordenadas do ponto v2 (x y): ");
    scanf("%f %f", &v2.x, &v2.y);

    printf("Digite as coordenadas do ponto p (x y): ");
    scanf("%f %f", &p.x, &p.y);

    ret = dentroRet(&v1,&v2,&p);

    if(ret == 1)
    {
        printf("O ponto esta dentro do triangulo.");
    }
    else
    {
        printf("O ponto NAO esta dentro do triangulo.");
    }

    return 0;
}

int dentroRet(Ponto* v1, Ponto* v2, Ponto* p)
{
    if(p->x > v1->x && p->x < v2->x)
    {
        if(p->y > v1->y && p->y < v2->y)
        {
            return 1;
        }
    }

    return 0;
}
