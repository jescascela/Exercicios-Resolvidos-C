#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Protótipo
char* shift_string(char* str);

int main()
{
    char str[21];

    printf("Digite uma string qualquer: ");
    scanf(" %s", str);

    printf("Nova string: %s\n", shift_string(str));

    printf("String original: %s", str);

    return 0;
}

char* shift_string(char* str)
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
            if(novaStr[i] == 'z')
            {
                novaStr[i] = 'a';
            }
            else
            {
                novaStr[i]++;
            }
        }

        if(novaStr[i] >= 'A' && novaStr[i] <= 'Z')
        {
            if(novaStr[i] == 'Z')
            {
                novaStr[i] = 'A';
            }
            else
            {
                novaStr[i]++;
            }
        }
    }

    return novaStr;
}
