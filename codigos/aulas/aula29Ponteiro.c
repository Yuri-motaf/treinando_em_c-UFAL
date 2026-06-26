/*
    aula 29 de maio;
    assunto:
        ponteiro
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void trocar(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int a , b; scanf("%d%d", &a,&b);

    printf("a:%d b:%d\n", a , b);

    int *pa, *pb;
    pa = &a; pb = &b;

    trocar(pa, pb);

    printf("a:%d b:%d" , a , b);
    return 0;
}
