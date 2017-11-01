#include <stdio.h>
#include <string.h>

//Protótipo
int conta_vogais(char* str);

int main()
{
    char str[41];
    int ret;//Armazena retorno da função conta_vogais

    printf("Digite uma string qualquer: ");
    scanf(" %40[^\n]", str);

    ret = conta_vogais(str);

    printf("A string possui %d vogal(is).", ret);

    return 0;
}

int conta_vogais(char* str)
{
    int i;
    int tamanho;
    char letra;
    int total = 0;
    tamanho = strlen(str);

    for(i=0;i<tamanho;i++)
    {
        letra = toupper(str[i]);//Transforma letra em maiúscula

        if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
        {
            total++;
        }
    }

    return total;
}
