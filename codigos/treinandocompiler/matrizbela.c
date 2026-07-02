#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int arr[5][5];
    int linha;
    int coluna;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j< 5; j++){
            int num; scanf("%d",&num);
            arr[i][j] = num;            
            if(num == 1){
                linha = i;
                coluna = j;
            }
        }
    }

    int mov = 0;
    while(linha != 2 || coluna != 2){
        if(linha > 2){
            linha -= 1;
            mov += 1;
        }
        else if(linha < 2){
            linha += 1;
            mov += 1;
        }

        if(coluna > 2){
            coluna -= 1;
            mov += 1;
        }
        else if(coluna < 2){
            coluna += 1;
            mov += 1;
        }
    }

    printf("%d\n", mov);
    return 0;
}