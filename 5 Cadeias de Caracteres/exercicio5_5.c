#include <stdio.h>
#include <string.h>

//Protótipo
void string_oposta(char* str);

int main()
{
    char str[21];

    printf("Digite uma string qualquer: ");
    scanf(" %s", str);

    string_oposta(str);

    return 0;
}

void string_oposta(char* str)
{
    int i;
    int tamanho;

    tamanho = strlen(str);

    for(i=0;i<tamanho;i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = 'a' + 'z' - str[i];
        }

        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = 'A' + 'Z' - str[i];
        }
    }

    printf("A nova string e igual a: %s", str);
}
