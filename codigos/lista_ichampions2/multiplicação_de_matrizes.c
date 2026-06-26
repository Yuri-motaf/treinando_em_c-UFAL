/*
Formato de entrada

A primeira linha terá 3 inteiros N, M, O :

- N representa a quantidade de linhas da matriz A.

- M representa a quantidade de colunas da matriz A e a quantidade de linhas da matriz B.

- O indica a quantidade de colunas da matriz B.

Sendo seguido de N linhas com M números inteiros representando a matriz A, logo em seguida mias M linhas com O números indicando a matriz B.

As matrizes A e B são compatíveis na multiplicação.

Formato de saida:
Imprimir a matriz C.

entrada:
2-LA 3-CA/LB 2-CB 
1 2 3- NUMEROS DAS LINHAS A
4 5 6- NUMEROS DA LINHAS A

7 8
9 10 -- MATRIZ B 3 LINHAS E 2 COLUNAS
11 12

MATRIZ A 

saida:
58 64
139 154
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void lerMatriz(int pos, int total, int matriz[]) {
    if (pos < total) {
        scanf("%d", &matriz[pos]);
        lerMatriz(pos + 1, total, matriz);
    }
}

int calcularElementoC(int i, int j, int k, int colunasA, int colunasB,int matrizA[], int matrizB[], int soma) {
    if (k < colunasA) {
        int elementoA = matrizA[i * colunasA + k];
        int elementoB = matrizB[k * colunasB + j];
        return calcularElementoC(i, j, k + 1, colunasA, colunasB,matrizA, matrizB, soma + elementoA * elementoB);
    }
    else 
    {
        return soma;
    }
}

void calcularMatrizC(int i, int j, int linhasA, int colunasA, int colunasB,int matrizA[], int matrizB[], int matrizC[]) {
    if (i < linhasA) {
        if (j < colunasB) 
        {
            matrizC[i * colunasB + j] = calcularElementoC(i, j, 0, colunasA, colunasB, matrizA, matrizB, 0);
            
            calcularMatrizC(i, j + 1, linhasA, colunasA, colunasB, matrizA, matrizB, matrizC);
        }
        else 
        {
            calcularMatrizC(i + 1, 0, linhasA, colunasA, colunasB, matrizA, matrizB, matrizC);
        }
    }
}

void imprimirMatrizC(int pos, int linhasA, int colunasB, int matrizC[]) {
    if (pos < linhasA * colunasB) {
        printf("%d", matrizC[pos]);
        
        if ((pos + 1) % colunasB != 0) 
        {
            printf(" ");
        }
        else if (pos + 1 < linhasA * colunasB) 
        {
            printf("\n");
        }
        
        imprimirMatrizC(pos + 1, linhasA, colunasB, matrizC);
    }
}

int main() {
    int linhasA, linhasB, colunasA, colunasB;

    scanf("%d %d %d", &linhasA, &colunasA, &colunasB);
    linhasB = colunasA;

    int matrizA[linhasA * colunasA];
    int matrizB[linhasB * colunasB];
    int matrizC[linhasA * colunasB];

    lerMatriz(0, linhasA * colunasA, matrizA);
    lerMatriz(0, linhasB * colunasB, matrizB);
    
    calcularMatrizC(0, 0, linhasA, colunasA, colunasB, matrizA, matrizB, matrizC);
    imprimirMatrizC(0, linhasA, colunasB, matrizC);
    printf("\n");

    return 0;
}