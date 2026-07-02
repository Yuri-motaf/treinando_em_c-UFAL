#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int a , b; 
        int op;
        scanf("%d %d", &a,&b);
        
        if((a == b))
        {
            printf("0");
        }
        else if(a % b == 0 || b % a == 0)
        {
            printf("1");
        }else{
            printf("2");
        }
        printf("\n");
    }
    return 0;
}