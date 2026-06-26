#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
    int n, m ; scanf("%d%d", &n,&m);

    for(int i = 1; i <= m ; i++){
        printf("%d", i);
        if(i != m && i % n != 0) printf(" ");
        if(i % n == 0) printf("\n");
    }
    return 0;
}