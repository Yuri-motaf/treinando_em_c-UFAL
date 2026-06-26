/*
O grande mestre de xadrez Kary Gasparov inventou um novo tipo de problema de xadrez:
Dada a posição de uma dama em um tabuleiro de xadrez vazio (ou seja, um tabuleiro 8 × 8, com 64 casas), de quantos movimentos, no mínimo, ela precisa para chegar em outra casa do tabuleiro?

Kary achou a solução para alguns desses problemas, mas teve dificuldade com outros, e por isso pediu que você escrevesse um programa que resolve esse tipo de problema.


Formato de entrada:
A entrada contém vários casos de teste. A primeira e única linha de cada caso de teste contém quatro inteiros X1, Y1, X2 e Y2 (1 <= X1, Y1,X2, Y2 <= 8). A dama começa na casa de coordenadas (X1, Y1), e a casa de destino é a casa de coordenadas (X2, Y2).

No tabuleiro, as colunas são numeradas da esquerda para a direita de 1 a 8 e as linhas de cima para baixo também de 1 a 8. As coordenadas de uma casa na linha X e coluna Y são (X, Y).

O último caso de teste é seguido por uma linha que contém apenas quatro números zero separados por um espaço em branco.


Formato de saída:
Para cada caso de teste da entrada seu programa deve imprimir uma única linha na saída, contendo um número inteiro, indicando o menor número de movimentos necessários para a dama chegar a sua casa de destino.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int movimento(int X1 ,int Y1 ,int X2 ,int Y2)
{
    if(X1 == X2 && Y1 == Y2) return 0;
    
    if((X1 == X2 || Y1 == Y2) || (abs(X1 - X2) == abs(Y1 - Y2))) return 1;

    return 2;
}


int main() {
    int X1, Y1 , X2 , Y2;
    scanf("%d%d%d%d",&X1, &Y1 , &X2 , &Y2);
    if(X1== 0) return 0;

    int num = movimento(X1, Y1 , X2 , Y2);

    printf("%d\n", num);
    return main();
}