#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[81];
    char matricula[8];
    char turma;
    float p1;
    float p2;
    float p3;
};
typedef struct aluno Aluno;

#define MAX 100

//Protótipos
void imprime_aprovados(int n, Aluno** turmas);
void inicializa(int n, Aluno** turmas);//Função de inicialização
void preenche(int n, Aluno** turmas, int i);//Armazena dados de um novo aluno em uma posição do vetor
void imprime(int n, Aluno** turmas);

int main()
{
    Aluno *a[MAX];
    int n;
    int i;

    printf("Digite a quantidade de alunos da turma: ");
    scanf("%d",&n);

    inicializa(n,a);

    for(i=0;i<n;i++)
    {
        preenche(n,a,i);
    }

    //imprime(n,a);
    imprime_aprovados(n,a);

    return 0;
}

void imprime_aprovados(int n, Aluno** turmas)
{
    int i;
    float media = 0;

    for(i=0;i<n;i++)
    {
        media = (turmas[i]->p1 + turmas[i]->p2 + turmas[i]->p3)/3;

        //Definindo a média de aprovação como maior ou igual a 6.0
        if(media >= 6.0)
        {
            printf("%s\n",turmas[i]->matricula);
            printf("%s\n",turmas[i]->nome);
            printf("%c\n",turmas[i]->turma);
            printf("%f",media);
        }
    }
}

void inicializa(int n, Aluno** turmas)
{
    int i;
    for(i=0;i<n;i++)
    {
        turmas[i] = NULL;
    }
}

void preenche(int n, Aluno** turmas, int i)
{
    if(i<0 || i>=n)
    {
        printf("Indice fora do limite do vetor\n");
        exit(1);
    }

    if(turmas[i] == NULL)
    {
        turmas[i] = (Aluno*)malloc(sizeof(Aluno));
    }

    printf("Digite o nome do aluno: ");
    scanf(" %80[^\n]", &turmas[i]->nome);
    printf("Digite a matricula do aluno: ");
    scanf(" %7[^\n]", &turmas[i]->matricula);
    printf("Digite a turma do aluno: ");
    fflush(stdin);//Limpa buffer do teclado
    scanf("%c", &turmas[i]->turma);
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &turmas[i]->p1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &turmas[i]->p2);
    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &turmas[i]->p3);
}

void imprime(int n, Aluno** turmas)
{
    int i;

    for(i=0;i<n;i++)
    {
        if(turmas[i] != NULL)
        {
            printf("Nome: %s\n", turmas[i]->nome);
            printf("Matricula: %s\n", turmas[i]->matricula);
            printf("Turma: %c\n", turmas[i]->turma);
            printf("P1: %f\n", turmas[i]->p1);
            printf("P2: %f\n", turmas[i]->p2);
            printf("P3: %f\n", turmas[i]->p3);
        }
    }
}
