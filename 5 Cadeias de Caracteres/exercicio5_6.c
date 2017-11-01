#include <stdio.h>
#include <string.h>

//Protótipo
void roda_string(char* str);

int main()
{
    char str[21];

    printf("Digite uma string qualquer: ");
    scanf(" %s",str);

    roda_string(str);

    return 0;
}

void roda_string(char* str)
{
    int i;
    int tamanho = strlen(str);
    char temp = str[tamanho-1];//Guarda último caractere

    for(i=tamanho-1;i>0;i--)
    {
        str[i] = str[i-1];
    }

    str[0] = temp;

    printf("A string alterada e igual a: %s", str);
}
