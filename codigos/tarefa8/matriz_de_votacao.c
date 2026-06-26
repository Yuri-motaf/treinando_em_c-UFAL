#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int P , E ; scanf("%d%d",&P, &E);

    int matriz[E][P];

    for(int i = 0; i < E; i++){
        for(int j = 0; j < P; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int j = 0; j < P; j++){
        int cont = 0;
        for(int i = 0; i < E; i++){
            if(matriz[i][j] == 1) cont += 1;
        }
        printf("Princesa %d: %d voto(s)\n", j+1, cont);
    }
    return 0;
}