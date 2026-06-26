/*
assuntos : 
- for e while
- matriz

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ",arr[i][j]);
        }      
        printf("\n");
    }


    int linha = m;
    int coluna = n;
    int novo_arr[linha][coluna];

    for(int i = 0; i < linha ; i++){
        for(int j = 0; j < coluna; j++){
            novo_arr[i][j] = arr[j][i];
        }
    }

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%d ", novo_arr[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}
