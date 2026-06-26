#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

int main(){
    int k;

    while (scanf("%d", &k) == 1 && k != 0){
        int n, m; scanf("%d %d", &n, &m);

        for (int i = 0; i < k; i++){
            int x, y;
            scanf("%d %d", &x, &y); 

            if(x == n || y == m)
            {
                printf("divisa\n");
            }
            else if (x > n && y > m)
            {
                printf("NE\n"); 
            }
            else if (x < n && y > m)
            {
                printf("NO\n"); 
            }
            else if (x < n && y < m)
            {
                printf("SO\n"); 
            }
            else
            {
                printf("SE\n"); 
            }
        }
    }

    return 0;
}