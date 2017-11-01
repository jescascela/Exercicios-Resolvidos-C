#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Prot�tipo
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
        /*A inten��o aqui, conforme pede o exerc�cio, � verificar apenas as ocorr�ncas
        de letras mai�sculas e transform�-las em min�scula e n�o simplesmente transformar
        tudo em mai�scula*/
        if(novaStr[i] >= 'A' && novaStr[i] <= 'Z')
        {
            novaStr[i] = tolower(str[i]);//Transforma a letra em min�scula
        }
    }

    return novaStr;
}
