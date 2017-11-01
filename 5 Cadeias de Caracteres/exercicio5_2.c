#include <stdio.h>
#include <string.h>

//Protótipo
int conta_char(char* str, char c);

int main()
{
    char str[41];
    char c;
    int ret;//Armazena retorno da função conta_char

    printf("Digite uma string qualquer: ");
    scanf(" %40[^\n]", str);

    printf("Digite uma letra para ser buscada: ");
    scanf(" %c", &c);

    ret = conta_char(str,c);

    printf("A string possui %d ocorrencia(s) do caractere %c", ret, c);

    return 0;
}

int conta_char(char* str, char c)
{
    int i;
    int tamanho;
    int total = 0;
    char letra;

    tamanho = strlen(str);

    for(i=0;i<tamanho;i++)
    {
        letra = toupper(str[i]);//Transforma letra em maiúscula

        if(letra == toupper(c))
        {
            total++;
        }
    }

    return total;
}
