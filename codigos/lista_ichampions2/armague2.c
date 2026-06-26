#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mdc(int a, int b){
    if (b == 0) return a;
    if( a % b == 0) return b;
    return mdc(b , a % b);
}

int ehPrimo(int n, int d) {
    if (n <= 1) return 0;
    if (d * d > n) return 1;
    if (n % d == 0) return 0;

    return ehPrimo(n, d + 1);
}

int verificahab(int round,int habata , int ataqueata , int vidaata , int vidaini){
    if(habata == 1) if(ehPrimo(round, 2) == 1) return 1;
    else if(habata == 2) if(mdc(vidaata , vidaini) == 1) return 2;
    else if(habata == 3) if(ehPrimo(vidaata, 2) == 1 || ehPrimo(ataqueata, 2) == 1) return 3;
    else return 0;
}

int rodada(int round , int ataInicial , int habW , int ataW , int vidaW , int habG, int ataG , int vidaG){
    if(vidaW <= 0) return 2;
    if(vidaG <= 0) return 1;

    int willAtaca = ( (ataInicial == 1 && (round % 2 == 1)) || (ataInicial == 2 && (round % 2 == 0)) );

    if(willAtaca){
        int hab = verificahab(round, habW , ataW , vidaW , vidaG);
        if(hab == 1) {
            vidaG -= ataW;
            if(vidaG <= 0) return 1;
            vidaG -= ataW;
        } else {
            if(hab == 2) ataW += 25;
            else if(hab == 3) ataW += 10;
            vidaG -= ataW;
        }
    }
    else{
        int hab = verificahab(round, habG , ataG , vidaG , vidaW);
        if(hab == 1) {
            vidaW -= ataG;
            if(vidaW <= 0) return 2;
            vidaW -= ataG;
        } else {
            if(hab == 2) ataG += 25;
            else if(hab == 3) ataG += 10;
            vidaW -= ataG;
        }
    }

    return rodada(round + 1, ataInicial, habW , ataW , vidaW , habG, ataG , vidaG);
}

void entradas(int rod , int cont, int pontW , int pontG)
{
    if(cont > rod) {
        printf("Will ganhou %d rodadas\n", pontW);
        printf("Gabriel ganhou %d rodadas\n", pontG);
        return;
    }
    int i;
    scanf("%d", &i);
    int habW , ataW , vidaW;
    scanf("%d %d %d", &habW , &ataW , &vidaW);
    int habG , ataG , vidaG;
    scanf("%d %d %d", &habG , &ataG , &vidaG);

    int ganhador = rodada(1, i, habW, ataW, vidaW, habG, ataG, vidaG);

    if(ganhador == 1) pontW++;
    if(ganhador == 2) pontG++;

    return entradas(rod , cont + 1, pontW , pontG);
}

int main(){
    int rod;
    scanf("%d", &rod);
    entradas(rod , 1 , 0 , 0);
    return 0;
}