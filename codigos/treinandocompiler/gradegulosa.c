#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int n , m ;scanf("%d %d", &n,&m);

        if(n == 1 || m == 1){
            printf("NO");
        }else if(n == 2 && m ==2){
            printf("NO");
        }else if(n >= 3 || m >= 3){
            printf("YES");
        }
        printf("\n");
    }
    return 0;
}