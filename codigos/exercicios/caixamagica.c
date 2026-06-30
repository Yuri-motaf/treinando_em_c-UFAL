#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n; scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int k ; scanf("%d", &k);
    int soma = 0;

    for(int i = 0; i < n ; i++){
        if(arr[i] % k == 0) soma += arr[i];
    }
    printf("%d", soma);
    return 0;
}