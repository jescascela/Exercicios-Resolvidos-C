#include <stdio.h>

typedef struct vetor
{
    float x;
    float y;
    float z;
}Vetor;

//Protótipo
float dot(Vetor* v1, Vetor* v2);

int main()
{
    Vetor v1;
    Vetor v2;
    float ret;
    printf("Digite os pontos do vetor v1 (x y z): ");
    scanf("%f %f %f", &v1.x, &v1.y, &v1.z);

    printf("Digite os pontos do vetor v2 (x y z): ");
    scanf("%f %f %f", &v2.x, &v2.y, &v2.z);

    ret = dot(&v1,&v2);

    printf("O produto escalar entre os vetores v1 e v2 e igual a: %f", ret);

    return 0;
}

float dot(Vetor* v1, Vetor* v2)
{
    float total;

    total = (v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z);

    return total;
}
