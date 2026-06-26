#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    double debitos =  0 , creditos = 0 , saldo = 0;

    int cont = 0;
    while(cont < 100){
        int n;
        scanf("%d" , &n);
        if(n == -1) break;

        if(n == 1){
            double v; scanf("%lf", &v);
            
            saldo += v;
            creditos += v;
        }
        if(n == 0){
            double v; scanf("%lf", &v);
            
            saldo -= v;
            debitos += v;
        }
        cont += 1;
    }

    printf("Creditos: R$ %.2lf\n", creditos);
    printf("Debitos: R$ %.2lf\n", debitos);
    printf("Saldo: R$ %.2lf", saldo);
}