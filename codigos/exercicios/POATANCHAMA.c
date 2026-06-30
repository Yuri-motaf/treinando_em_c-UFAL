#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehprimo(int n){
    if(n % 2 == 0 || n <= 1 ) return false;
    
    for (int i = 1; i < n; i++) {
        if (n % i == 0) return false; 
    } 
    
    return true;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    
    if((n <= 0 || n > 10) || (m <= 0 || m > 10)){
        printf("Han??");
        return 0;
    }
    
    int arr[n][m];
    int c = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        int soma = 0;
        for(int j = 0; j < m; j++){
            soma += arr[i][j];
        }
        if(ehprimo(soma)) c += 1;
    } 

    if(c > n/2)printf("Chama");
    else printf("Não chama");
    
    
    return 0;
}