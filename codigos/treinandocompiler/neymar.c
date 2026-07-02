#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

#define ll long long

int main(){
    int p , r , g , x;
    ll int stotal;
    int spg;
    scanf("%d%d%d%d", &p,&r,&g,&x);

    spg = x * g;
    if(spg > r) stotal =(ll int) p * r;
    else if(spg <= p) stotal = (ll int) spg * p;

    printf("%lld", stotal);
    return 0;
}