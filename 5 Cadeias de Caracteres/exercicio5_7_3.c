#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Protótipo
char* minusculo(char* str);

int main()
{
    char str[41];

    printf("Digite uma string qualquer: ");
    scanf(" %40[^\n]", str);

    printf("Nova string: %s\n", minusculo(str));

    printf("String original: %s", str);

    return 0;
}

char* minusculo(char* str)
{
    int i;
    int tamanho;
    char* novaStr;

    tamanho = strlen(str);

    novaStr = (char*)malloc(41*sizeof(char));

    strcpy(novaStr,str);

    for(i=0;i<tamanho;i++)
    {
        /*A intenção aqui, conforme pede o exercício, é verificar apenas as ocorrêncas
        de letras maiúsculas e transformá-las em minúscula e não simplesmente transformar
        tudo em maiúscula*/
        if(novaStr[i] >= 'A' && novaStr[i] <= 'Z')
        {
            novaStr[i] = tolower(str[i]);//Transforma a letra em minúscula
        }
    }

    return novaStr;
}
