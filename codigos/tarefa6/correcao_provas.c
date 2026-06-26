/*
Faça um programa para corrigir provas de múltipla escolha. Cada prova tem 10 questões, cada questão valendo um ponto. O primeiro conjunto de dados a ser lido é o gabarito para a correção da prova. Depois serão dados os números dos alunos e suas respectivas respostas. O programa encerra a entrada quando o número de um aluno dado for igual a 9999

Formato de entrada

Uma sequência de 10 caracteres correspondendo ao gabarito. Depois é dada uma sequência de números inteiros representando o aluno e a uma sequencia de caracteres correspondendo a sua resposta.

Formato de saída

Para cada aluno lido, na mesma ordem de leitura, deve ser impresso seu número e sua nota. A nota deve ser formatada com uma casa decimal.

Ao final, deve ser impresso a porcentagem de aprovação, sabendo-se que a nota mínima para aprovação é de 6. O percentual deve ser impresso com uma casa decimal seguido do caractere %.

Por fim, deve ser impressa a nota que teve a maior frequência absoluta, ou seja, a nota que apareceu o maior número de vezes (supondo a inexistência de empates).
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void lerSequencia(char lista[], int i, int tam)
{
    if(i == tam) return;
    
    scanf(" %c", &lista[i]);
    return lerSequencia(lista , i + 1 , tam);
}

int comparar_respostas(char resposta_aluno[], char gabarito[] , int i , int tam , int cont )
{
    if(i == tam) return cont;

    if(resposta_aluno[i] == gabarito[i]) cont += 1;

    return comparar_respostas(resposta_aluno , gabarito , i + 1, tam , cont);
}

void atualizar_frequencia(int frequencia[], int nota)
{
    frequencia[nota] += 1;
}

float encontrar_nota_maior_freq(int frequencia[], int i, int maior, float maior_nota)
{
    if(i > 10) return maior_nota;
    
    if(frequencia[i] > maior) {
        maior = frequencia[i];
        maior_nota = i;
    }
    
    return encontrar_nota_maior_freq(frequencia, i + 1, maior, maior_nota);
}

void entrada(char gabarito[], int frequencia[], float aprovados, int alunos)
{
    int num;
    scanf("%d", &num);
    if(num == 9999){
        double porc_aprov = (double)(aprovados / (alunos - 1)) * 100.0;
        printf("%.1lf%%\n", porc_aprov);
        
        float nota_freq = encontrar_nota_maior_freq(frequencia, 0, 0, 0);
        printf("%.1f\n", nota_freq);
    }
    else{
        char respostasAluno[10];
        
        lerSequencia(respostasAluno, 0 , 10);

        int nota = comparar_respostas(respostasAluno , gabarito, 0 , 10 , 0);
        
        float novo_aprovados = aprovados;
        if(nota >= 6) novo_aprovados += 1;

        printf("%d %.1f\n", num, (float)nota);
        atualizar_frequencia(frequencia, nota);
        
        return entrada(gabarito, frequencia, novo_aprovados, alunos + 1);
    }
}

int main() {
    char listagabarito[10];
    int frequencia[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    lerSequencia(listagabarito , 0 , 10);

    entrada(listagabarito, frequencia, 0, 1);
    return 0;
}