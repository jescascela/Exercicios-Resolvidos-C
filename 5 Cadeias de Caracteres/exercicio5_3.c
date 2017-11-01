#include <stdio.h>
#include <string.h>

//Prot�tipo
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
        /*A inten��o aqui, conforme pede o exerc�cio, � verificar apenas as ocorr�ncas
        de letras mai�sculas e transform�-las em min�scula e n�o simplesmente transformar
        tudo em mai�scula*/
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = tolower(str[i]);//Transforma a letra em min�scula
        }
    }

    printf("A string agora e igual a: \n");

    printf("%s", str);
}
