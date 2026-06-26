/*
Escreva umprograma que leia uma matriz 3 x 3 de inteiros da entrada padrão e calcule a média de todos seus valores, o maior valor lido , o valor delta e a soma dos elementos da diagonal princial.


O delta é igual a 1 se o maior valor for positivo, -1 se for negativo e zero se for zero.

entrada:
9 valores inteiros referentes aos elementos da matriz.

saída:
4 valores numéricos: o primeiro é um número em ponto flutuante de duas casas decimais e os outros três inteiros.


*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int matriz[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", matriz[i][j]);
        }
    }

    float media; int maior = -100 , delta , soma = 0 , soma_diagonal = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            soma += matriz[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] > maior) maior = matriz[i][j] ;
        }
    }

    media =(float) soma/9.0;

    if(maior > 0) delta = 1;
    else if(maior == 0) delta = 0;
    else if(maior < 0) delta = -1;
    
    for(int i = 0; i < 3 ; i++){
        soma_diagonal += matriz[i][i];
    }
    

    printf("%.2f %d %d %d", media , maior , delta , soma_diagonal);   
}