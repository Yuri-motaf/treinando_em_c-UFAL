#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, s; scanf("%d %d", &n , &s);

    int arr[n+1];

    for(int i = 1; i <= n + 1 ; i++){
        int d ; scanf("%d", &d);
        
        if(d < 0) s += d; 
        if(d > 0) s += d;
        
        arr[i] = s;
    }

    int menor = 10000000;
    for(int i = 0; i < n ; i++){
        if(arr[i] < menor) menor = arr[i];
    }
    printf("%d", menor);
}