#include <stdio.h>
#include <math.h>//Para usar a função pow

#define PI 3.14

//Protótipo
void calc_esfera(float r, float* area, float* volume);

int main()
{
    float raio;
    float a;//área
    float v;//volume

    printf("Informe o raio da esfera: ");
    scanf("%f",&raio);

    calc_esfera(raio,&a,&v);

    printf("Area da esfera: %f\n", a);
    printf("Volume da esfera: %f", v);

    return 0;
}

void calc_esfera(float r, float* area, float* volume)
{
    //Aqui podemos aplicar a fórmula duretamente
    (*area) = 4*PI*pow(r,2);
    (*volume) = (4*PI*pow(r,3))/3;
}
