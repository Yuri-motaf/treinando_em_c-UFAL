#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int teste = 1;
    while(scanf("%d", &n) == 1){
        if(n == 0) break;
        int matriz[n][4];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 4; j++){
                scanf("%d", &matriz[i][j]);
            }
        }

        int left = matriz[0][0];
        int top = matriz[0][1];
        int right = matriz[0][2];
        int bottom = matriz[0][3];

        for(int i = 1; i < n; i++){
            if(matriz[i][0] > left) left = matriz[i][0];
            if(matriz[i][1] < top) top = matriz[i][1];
            if(matriz[i][2] < right) right = matriz[i][2];
            if(matriz[i][3] > bottom) bottom = matriz[i][3];
        }

        printf("Teste %d\n", teste++);
        if(left <= right && bottom <= top){
            printf("%d %d %d %d\n\n", left, top, right, bottom);
        } else {
            printf("nenhum\n\n");
        }
    }
    return 0;
}
