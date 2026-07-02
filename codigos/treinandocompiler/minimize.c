#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int n; scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        int menorS = 10000;
        int s;
        
        int a , b ; scanf("%d %d", &a , &b);
        
        
        for(int c = a; c <= b ;c++){
            s = (c - a) + (b - c);
            if(s < menorS) menorS = s;
        }
        
        printf("%d\n", menorS);
    }
    return 0;
}