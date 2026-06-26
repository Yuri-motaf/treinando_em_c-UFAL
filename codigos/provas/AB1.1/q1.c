#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float valor_compra , valor_pago;
    int qntd_notas20 = 0, qntd_notas10 = 0, qntd_notas5 = 0, qntd_moedas1 = 0,qntd_moedas50 = 0;
    float troco, troco_pago;
    
    scanf("%f %f", &valor_compra ,&valor_pago);
    
    troco = valor_pago - valor_compra;
    troco_pago = troco;
    
    if(valor_compra == valor_pago)
    {
        qntd_notas20 = 0;
        qntd_notas10 = 0;
        qntd_notas5 = 0;
        qntd_moedas1 = 0;
        qntd_moedas50 = 0;
    }
    else
    {   
        troco = valor_pago - valor_compra;
        if(troco >= 20)
        {
            printf("%f\n", troco);
            troco -= 20;
            qntd_notas20 +=1;
            printf("%f\n", troco);
            if(troco >= 20)
            {
                troco -= 20;
                qntd_notas20 += 1;
            }
        }
        if(troco >= 10)
        {
            printf("%f\n", troco);
            troco -= 10;
            qntd_notas10 += 1;
            printf("%f\n", troco);
            if(troco >= 10)
            {
                troco -= 10;
                qntd_notas10 += 1;
            }
        }
        if(troco >= 5){
            printf("%f\n", troco);
            troco -= 5;
            qntd_notas5 += 1;
            printf("%f\n", troco);
            if(troco >= 5)
            {
                troco -= 5;
                qntd_notas5 += 1;
            }
        }
        if(troco >= 1)
        {
            printf("%f\n", troco);
            troco -= 1;
            qntd_moedas1 += 1;
            printf("%f\n", troco);
            if(troco >= 1)
            {
                troco -= 1;
                qntd_moedas1 += 1;
            }
        }
        if(troco >= 0.5)
        {
            printf("%f\n", troco);
            troco -= 0.5;
            qntd_moedas50 +=1;
            if(troco >= 0.5)
            {
                troco -= 0.5;
                qntd_moedas50 += 1;
            }
        }
    }

    printf("%.2f\n",troco_pago );
    printf("Notas de 20: %d\n" , qntd_notas20); 
	printf("Notas de 10: %d\n" , qntd_notas10);
    printf("Notas de 5: %d\n" , qntd_notas5);
    printf("Moedas de 1: %d\n" , qntd_moedas1);
    printf("Moedas de 0.50: %d\n" , qntd_moedas50);
    return 0;

}