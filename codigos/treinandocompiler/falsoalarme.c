#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h> 
#include <stdbool.h>

int main(){ 
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int y , tmp;
        scanf("%d %d", &y, &tmp);
        int arr[y];
        
        for(int j = 0; j < y; j++){ 
            scanf("%d", &arr[j]);
        }
        bool passar = true;
        bool btn = false;

        for(int j = 0 ; j < y; j++)
        {

            if(arr[j] == 0 && btn == true)
            {
                tmp -=1;
            }
            else if(arr[j] == 1 && btn == false){
                btn = true;
                tmp -= 1;
            }
            else if(arr[j] == 1 && btn == true){
                if(tmp <= 0) passar = false;
                tmp -=1 ;
            }
        }
        if(passar == false) printf("NO\n");
        else printf("YES\n");
    } 
    return 0;
}