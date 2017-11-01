#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Protótipo
char* roda_string(char* str);

int main()
{
    char str[21];

    printf("Digite uma string qualquer: ");
    scanf(" %s",str);

    printf("Nova string: %s\n", roda_string(str));

    printf("String original: %s", str);

    return 0;
}

char* roda_string(char* str)
{
    int i;
    int tamanho = strlen(str);
    char temp = str[tamanho-1];//Guarda último caractere
    char* novaStr;

    novaStr = (char*)malloc(21*sizeof(char));

    strcpy(novaStr,str);

    for(i=tamanho-1;i>0;i--)
    {
        novaStr[i] = novaStr[i-1];
    }

    novaStr[0] = temp;

    return novaStr;
}
