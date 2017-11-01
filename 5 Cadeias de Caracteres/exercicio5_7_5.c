#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Prot�tipo
char* string_oposta(char* str);

int main()
{
    char str[21];

    printf("Digite uma string qualquer: ");
    scanf(" %s", str);

    printf("Nova string: %s\n", string_oposta(str));

    printf("String original: %s", str);

    return 0;
}

char* string_oposta(char* str)
{
    int i;
    int tamanho;
    char* novaStr;

    tamanho = strlen(str);

    novaStr = (char*)malloc(21*sizeof(char));

    strcpy(novaStr,str);

    for(i=0;i<tamanho;i++)
    {
        if(novaStr[i] >= 'a' && novaStr[i] <= 'z')
        {
            novaStr[i] = 'a' + 'z' - novaStr[i];
        }

        if(novaStr[i] >= 'A' && novaStr[i] <= 'Z')
        {
            novaStr[i] = 'A' + 'Z' - novaStr[i];
        }
    }

    return novaStr;
}
