#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int matriz[3][3];

    int num_pos = 0 , soma_pos = 0;
    int menor = 10000000, delta , soma_fora_diagonal;

    float media_pos;

    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] > 0)
            {
                num_pos += 1;
                soma_pos += matriz[i][j];
            }
        }
    }

    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] < menor) menor = matriz[i][j];
        }
    }

    if(menor % 2 == 0) delta = 1;
    if(menor % 2 != 0) delta = 0;

    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 3; j++){
            if(i != j) soma_fora_diagonal += matriz[i][j];
        }
    }
    
    media_pos = (float) soma_pos/num_pos;

    printf("%.2f %d %d %d", media_pos , menor , delta , soma_fora_diagonal);



    return 0;
}