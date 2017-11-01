#include <stdio.h>
#include <string.h>

//Protótipo
void minusculo(char* str);

int main()
{
    char str[41];

    printf("Digite uma string qualquer: ");
    scanf(" %40[^\n]", str);

    minusculo(str);

    return 0;
}


void minusculo(char* str)
{
    int i;
    int tamanho;

    tamanho = strlen(str);

    for(i=0;i<tamanho;i++)
    {
        /*A intenção aqui, conforme pede o exercício, é verificar apenas as ocorrêncas
        de letras maiúsculas e transformá-las em minúscula e não simplesmente transformar
        tudo em maiúscula*/
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = tolower(str[i]);//Transforma a letra em minúscula
        }
    }

    printf("A string agora e igual a: \n");

    printf("%s", str);
}
