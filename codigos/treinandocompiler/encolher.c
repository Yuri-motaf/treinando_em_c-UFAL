#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int n; scanf("%d", &n);
    while (n--)
    {
        int x; scanf("%d", &x);
        printf("1");
        for(int i = x; i >=2; i--){
            printf(" %d", i);
        }   
        printf("\n");
    }
    return 0;
}