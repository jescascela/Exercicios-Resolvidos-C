#include <stdio.h>
#include <string.h>

//Protótipo
void shift_string(char* str);

int main()
{
    char str[21];

    printf("Digite uma string qualquer: ");
    scanf(" %s", str);

    shift_string(str);

    return 0;
}

void shift_string(char* str)
{
    int i;
    int tamanho;

    tamanho = strlen(str);

    for(i=0;i<tamanho;i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            if(str[i] == 'z')
            {
                str[i] = 'a';
            }
            else
            {
                str[i]++;
            }
        }

        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            if(str[i] == 'Z')
            {
                str[i] = 'A';
            }
            else
            {
                str[i]++;
            }
        }
    }

    printf("A string agora e igual a: %s", str);
}
