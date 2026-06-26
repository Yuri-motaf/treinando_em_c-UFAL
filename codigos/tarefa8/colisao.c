#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int m , n; scanf("%d %d", &m ,&n);
    int matriz[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int num_mov; scanf("%d", &num_mov);
    char mov[num_mov];
    for(int i = 0; i < num_mov ; i++){
        scanf(" %c ", &mov[i]);
    }

    int x , y ;
    scanf("%d %d", &x ,&y);


    int idx = 0;
    for(int i = 0; i < num_mov ; i++){
        if(mov[i] == 'D'){
            if(matriz[x][y+1] != 0 && y+1 < n) y += 1;
        }
        if(mov[i] == 'E'){
            if(matriz[x][y-1] != 0 && y-1 >= 0) y-=1 ;
        }
        if(mov[i] == 'C'){
            if(matriz[x-1][y] != 0 && x - 1 >= 0) x -=1;
        }
        if(mov[i] == 'B'){
            if(matriz[x+1][y] != 0 && x + 1 < m) x+= 1;
        }
    }
    printf("(%d,%d)", x , y);
}