/*
    struct em c

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

// int main(){

//     struct ficha_aluno
//     {
//         char nome[50];
//         char disciplina[30];
//         float nota1;
//         float nota2;
//     };

//     struct ficha_aluno aluno;

//     printf("Digite o nome do aluno: ");
//     fgets(aluno.nome, 50, stdin);
//     printf("Digite a disciplina: ");
//     fgets(aluno.disciplina, 30, stdin);
//     printf("Digite a primeira nota: ");
//     scanf("%f", &aluno.nota1);
//     printf("Digite a segunda nota: ");  
//     scanf("%f", &aluno.nota2);

//     printf("\n-----FICHA DO ALUNO-----\n");
//     printf("Nome: %s", aluno.nome);
//     printf("Disciplina: %s", aluno.disciplina);
//     printf("Primeira nota: %.2f\n", aluno.nota1);
//     printf("Segunda nota: %.2f\n", aluno.nota2);

//     return 0;
// }

//FAZENDO UM STRUCT COM TYPEDEF, PARA NAO TER QUE FICAR DIGITANDO "struct" TODA HORA

int main(){
    
    typedef struct{
        char nome[50];
        char disciplina[30];
        float nota1;
        float nota2;
        float media;
        bool aprovado;
    } FichaAluno;

    FichaAluno aluno1;
    
    printf("Digite o nome do aluno: ");
    fgets(aluno1.nome, 50, stdin);
    
    printf("Digite a disciplina: ");
    fgets(aluno1.disciplina, 30, stdin);
    
    printf("Digite a primeira nota: ");
    scanf("%f", &aluno1.nota1);
    if(aluno1.nota1 < 0 || aluno1.nota1 > 10)
    {
        printf("nota invalida, nota 1 sera dada como 0\n");
        aluno1.nota1 = 0;
    }
    
    
    printf("Digite a segunda nota: ");  
    scanf("%f", &aluno1.nota2);
    if(aluno1.nota2 < 0 || aluno1.nota2 > 10)
    {
        printf("nota invalida, nota 2 sera dada como 0\n");
        aluno1.nota2 = 0;
    }

    aluno1.media = (aluno1.nota1 + aluno1.nota2) / 2 ;
    
    if(aluno1.media >= 7) aluno1.aprovado = true;
    else aluno1.aprovado = false;
    

    printf("\n-----FICHA DO ALUNO-----\n");
    printf("Nome: %s", aluno1.nome);
    printf("Disciplina: %s", aluno1.disciplina);
    printf("Primeira nota: %.2f\n", aluno1.nota1);
    printf("Segunda nota: %.2f\n", aluno1.nota2);
    printf("Média: %.2f\n", aluno1.media);
    if(aluno1.aprovado) printf("Situação: Aprovado\n");
    else printf("Situação: Reprovado\n");
    return 0;
}