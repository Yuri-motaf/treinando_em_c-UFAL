/*
O jogo de Sudoku espalhou-se rapidamente por todo o mundo, tornando-se hoje o passatempo mais popular em todo o planeta. Muitas pessoas, entretanto, preenchem a matriz de forma incorreta, desrespeitando as restrições do jogo.

Sua tarefa neste problema é escrever um programa que verifica se uma matriz preenchida é ou não uma solução para o problema.

A matriz do jogo é uma matriz de inteiros 9 x 9 . Para ser uma solução do problema, cada linha e coluna deve conter todos os números de 1 a 9. Além disso, se dividirmos a matriz em 9 regiões 3 x 3, cada uma destas regiões também deve conter os números de 1 a 9.

O exemplo abaixo mostra uma matriz que é uma solução do problema. 

1 3 2 | 5 7 9 | 4 6 8
4 9 8 | 2 6 1 | 3 7 5
7 5 6 | 3 8 4 | 2 1 9
------+-------+------
6 4 3 | 1 5 8 | 7 9 2
5 2 1 | 7 9 3 | 8 4 6
9 8 7 | 4 2 6 | 5 3 1
------+-------+------
2 1 4 | 9 3 5 | 6 8 7
3 6 5 | 8 1 7 | 9 2 4
8 7 9 | 6 4 2 | 1 5 3


Formato de entrada

São dadas várias instâncias. O primeiro dado é o número n > 0 de matrizes na entrada. Nas linhas seguintes são dadas as n matrizes. Cada matriz é dada em 9 linhas, em que cada linha contém 9 números inteiros.

Formato de saída

Para cada instância seu programa deverá imprimir uma linha dizendo Instancia k, onde k é o número da instância atual. Na segunda linha, seu programa deverá imprimir SIM se a matriz for a solução de um problema de Sudoku, e NAO caso contrário. Imprima uma linha em branco após cada instância.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

void zerar_arr(int arr[], int tam_arr)
{
    for(int i = 0; i < tam_arr ; i++){
        arr[i] = 0;
    }
}

bool verificar(int num , int arr[], int tam_arr)
{
    for(int i = 0 ; i < tam_arr ; i++){
        if(arr[i] == num) return false;
    }
    return true;
}

int main(){
    int n;  scanf("%d", &n);
    
    int arr[9];

    int idx;

    int sudoku[9][9];
    for(int z = 0; z <= n ; z++){
        
        //ler matriz do sudoku
        for(int i = 0; i < 9 ; i++){
            for(int j = 0; j < 9; j++){
                scanf("%d", &sudoku[i][j]);
            }
        }


        bool valido = true;

        //verifico de linha em linha 
        if(valido){
            for(int i = 0; i < 9; i++){
                zerar_arr(arr , 9);
                idx = 0;
                for(int j = 0; j < 9 ; j++){
                    if(verificar(sudoku[i][j], arr , 9) == true){
                        arr[idx] = sudoku[i][j];
                        idx += 1; 
                    }
                    else{
                        valido = false;
                        break;
                    }
                }
                if(!valido) break;
            }
        }

        //verificando de coluna em coluna 
        if(valido){
            for(int j = 0; j < 9; j++){
                zerar_arr(arr , 9);
                idx = 0;
                for(int i = 0; i < 9 ; i++){
                    if(verificar(sudoku[i][j], arr , 9) == true){
                        arr[idx] = sudoku[i][j];
                        idx += 1; 
                    }
                    else{
                        valido = false;
                        break;
                    }
                }
                if(!valido) break;
            }
        }
        
        if(valido){
            for(int iniciolinha = 0; iniciolinha < 9 ; iniciolinha += 3){
                for(int iniciocoluna = 0; iniciocoluna < 9; iniciocoluna += 3){
                    zerar_arr(arr, 9);
                    idx = 0;
                    for(int i = iniciolinha; i < iniciolinha + 3; i++){
                        for(int j = iniciocoluna; j < iniciocoluna + 3; j++){
                            if(verificar(sudoku[i][j], arr , 9) == true){
                                arr[idx] = sudoku[i][j];
                                idx += 1;
                            }
                            else{
                                valido = false;
                                break;
                            }
                        }
                        if(!valido) break;
                    }
                    if(!valido) break;
                }
                if(!valido) break;
            }
        }



        printf("Instancia %d\n", z);
        if(valido){
            printf("SIM\n");
        }
        else{
            printf("NAO\n");
        }
        printf("\n");
    }   
    return 0;
}