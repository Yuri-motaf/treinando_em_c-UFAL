#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int n; scanf("%d", &n);
    for(int i = 0; i < n ; i++ ){
        int l,r,d,u;
        scanf("%d%d%d%d", &l,&r,&d,&u);
        bool iguais = false;

        if (l == r && d == u && l == d) {
            iguais = true;
        }

        if(iguais == true) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}