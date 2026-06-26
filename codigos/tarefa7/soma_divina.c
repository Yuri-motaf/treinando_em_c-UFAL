/*Em uma aula extra, Silvio precisa escrever a soma de duas matrizes quadradas. Como o quadro da sala é muito pequeno, a soma não pode ser feita adequadamente. Em troca de 0,125 pontos, Zé aluno do CIn se oferece para resolver o problema, e precisa de sua ajuda.



Sua tarefa é escrever um programa que dadas duas matrizes, realize a soma entre elas.



Formato de entrada

N

M1

M2

N- número inteiro
M1
M2
A primeira linha de entrada é referente a ordem das matrizes.

Depois, um número N² de números inteiros que descrevem a primeira matriz.

Depois, um número N² de números inteiros que descrevem a segunda matriz.



obs1: a ordem de leitura dos elementos é dado a cada linha, da esquerda para a direita.

obs2: é necessário que a questão seja feita utilizando arrays multidimensionais

Formato de saída

MR

MR - matriz resultante 
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N; scanf("%d", &N);
    if(N == 0) printf("Vazia");
    
    int M1[N][N], M2[N][N] ;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &M1[i][j]);
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &M2[i][j]);
        }
    }

    int MR[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            MR[i][j] = M1[i][j] + M2[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            MR[i][j] = M1[i][j] + M2[i][j];
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d\n", MR[i][j]);
        }
    }
    
    
    return 0;
}