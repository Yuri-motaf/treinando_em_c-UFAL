/*
Descrição
Escreva um programa que lê 3 números X, Y e Z (X < Y e Z >= 1). Em seguida, o programa exibe uma seqüência de 1 a Y, com valores incrementados pelo valor de Z, passando para a próxima linha a cada X números serem impressos na linha.

Formato de entrada

A entrada contém três números inteiros X (1 < X < 20), Y (X < Y < 100000) e Z (Z >= 1).

Formato de saída

Cada seqüência deverá ser impressa em uma linha, com um espaço em branco entre cada número, como o exemplo de saída.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int x , y , z; scanf("%d%d%d", &x, &y, &z);
    int c = 0;
    for(int i = 1; i <= y ; i+=z){
        printf("%d", i);
        c +=1;
        if(c != x){
            printf(" ");
        } 
        if(c == x){
            printf("\n");
            c = 0;
        } 
    }
    return 0;
}