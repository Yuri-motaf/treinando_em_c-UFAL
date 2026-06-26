/*Ekul é um pequeno e corajoso cachorro que decidiu partir em aventuras pelo mundo. Na mais recente aventura de Ekul ele decidiu se aventurar na nação do Íavah, onde haviam lendas sobre um labirinto antigo com uma tigela mágica de Poke guardada no final. Entretanto, ao chegar lá, percebeu que o labirinto era protegido por uma dragoa dorminhoca, que não abriria mão da tigela de poke por nada.

Percebendo que algumas paredes do labirinto tinham frestas com tamanho suficiente para um cachorro atravessar, Ekul decidiu procurar um caminho em que não se deparasse com a dragoa. A dragoa tem um faro aguçado, e mesmo dormindo era capaz de sentir o cheiro de Ekul a uma certa distância.

Sabendo que Ekul só é capaz de se movimentar para baixo e para a direita, dada uma matriz NxN, em que 0 indica a existência de uma parede que não pode ser atravessada, 1 indica a existência de uma parede com fresta (que pode ser atravessada) e 2 indica a localização da dragoa, determine se Ekul consegue de alguma maneria chegar até o final do labirinto.

OBS1: A posição inicial de Ekul é sempre na coordenada (0,0) e o final do labirinto é sempre na coordenada (N-1, N-1).

OBS2: A dragoa é capaz de sentir o cheiro de Eluk vindo de UMA CASA DE DISTÂNCIA, de todas as direções, INCLUINDO DIAGONAIS.

OBS3: N >= 3

Formato de entrada

Um inteiro N, representando o tamanho do labirinto, seguido por 0's, 1's e um 2, representando a composição do labirinto.

Formato de saída

"Ekul conseguiu ludibriar a dragoa!", caso exista pelo menos um caminho em que ele chegue até o fim do labirinto, ou "Ekul tomou o nhac da dragoa :(", caso não exista nenhum caminho que atenda às condições.

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int  n; scanf("%d", &n);

    int matriz[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int matriz_posicao[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matriz_posicao[i][j] = 0;
        }
    }
    matriz_posicao[0][0] = 1; // posição inicial do cachorro

    int dragoa_i = -1, dragoa_j = -1; //posição do dragão
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matriz[i][j] == 2){
                dragoa_i = i;
                dragoa_j = j;
            }
        }
    }

    if(matriz[0][0] == 0){
        printf("Ekul tomou o nhac da dragoa :(\n");
        return 0;
    }
    
    int fila_i[n*n], fila_j[n*n];
    int inicio = 0, fim = 0;
    
    fila_i[fim] = 0;
    fila_j[fim] = 0;
    fim += 1;

    bool conseguiu = false;
    while(inicio < fim)
    {
        int i = fila_i[inicio];
        int j = fila_j[inicio];
        inicio++;
        
        if(i == n-1 && j == n-1){
            conseguiu = true;
            break;
        }
        
        if(i + 1 < n && matriz_posicao[i+1][j] == 0 && matriz[i+1][j] != 0){
            int dist = (i+1 - dragoa_i) * (i+1 - dragoa_i) + (j - dragoa_j) * (j - dragoa_j);
            if(dist > 2){
                matriz_posicao[i+1][j] = 1;
                fila_i[fim] = i+1;
                fila_j[fim] = j;
                fim++;
            }
        }
        
        if(j + 1 < n && matriz_posicao[i][j+1] == 0 && matriz[i][j+1] != 0){
            int dist = (i - dragoa_i) * (i - dragoa_i) + (j+1 - dragoa_j) * (j+1 - dragoa_j);
            if(dist > 2){
                matriz_posicao[i][j+1] = 1;
                fila_i[fim] = i;
                fila_j[fim] = j+1;
                fim += 1;
            }
        }
    }

    if(conseguiu){
        printf("Ekul conseguiu ludibriar a dragoa!\n");
    } else {
        printf("Ekul tomou o nhac da dragoa :(\n");
    }

    return 0;
}