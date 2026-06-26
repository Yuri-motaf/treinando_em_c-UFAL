#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

int main(){
    int n, m;
    int campo = 0;
    int primeiro = 1;
    
    while (scanf("%d %d", &n, &m) == 2) {
        char grade[n][m];
        char saida[n][m];
        
        if (n == 0 && m == 0){
            break;
        }

        for (int i = 0; i < n; i++) {
            scanf("%s", grade[i]);
        }

        campo++;

        if (!primeiro) printf("\n");

        primeiro = 0;

        printf("Field #%d:\n", campo);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grade[i][j] == '*')
                {
                    saida[i][j] = '*';
                }
                else 
                {
                    int cont = 0;

                    for (int di = -1; di <= 1; di++) {
                        for (int dj = -1; dj <= 1; dj++) {

                            if (di == 0 && dj == 0){
                                continue;
                            }

                            int ni = i + di;
                            int nj = j + dj;

                            if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                                if (grade[ni][nj] == '*') {
                                    cont++;
                                }
                            }
                        }
                    }

                    saida[i][j] = (char)('0' + cont);
                }
            }
            saida[i][m] = '\0';
        }

        for (int i = 0; i < n; i++) {
            printf("%s\n", saida[i]);
        }
    }

    return 0;
}