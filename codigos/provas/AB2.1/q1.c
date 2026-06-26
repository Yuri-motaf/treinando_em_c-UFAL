#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int contar_fibonacci(long long int arr[], int n, int i)
{
    if (i == 0){
        arr[i] = 0;
    }
    else if (i == 1){
        arr[i] = 1;
    }
    else{
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    if (i == n){
        return arr[i];
    }

    contar_fibonacci(arr, n, i + 1);
}

int main(){

	int n; scanf("%d", &n);
    long long int arr[n];
    long long int resp = contar_fibonacci(arr, n, 0);

	printf("%lld", resp);
}

