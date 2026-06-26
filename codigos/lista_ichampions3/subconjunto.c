#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n; scanf("%d", &n);

    int arr[10];
    int neg = false;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < 0) neg = true;
    }

    if (neg)
    {
        printf("-1\n");
        return 0;
    }

    int subA[120], subB[120], subC[120], soma[120];
    int c = 0;

    for (int i = 0; i < n - 2; i++){
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                subA[c]   = arr[i];
                subB[c]   = arr[j];
                subC[c]   = arr[k];
                soma[c] = arr[i] + arr[j] + arr[k];
                c += 1;
            }
        }
    }

    int freq[120];
    for (int i = 0; i < c; i++)
    {
        
        freq[i] = 0;
        
        for (int j = 0; j < c; j++) 
        {
            if (soma[i] == soma[j])  freq[i] += 1;
        }
    }

    for (int i = 0; i < c; i++)
    {
        if (freq[i] == 1)
        {
            printf("{%d,%d,%d} = %d\n", subA[i] , subB[i] , subC[i] , soma[i]);
        }
    }

    return 0;
}