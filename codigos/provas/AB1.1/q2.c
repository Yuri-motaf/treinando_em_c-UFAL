#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float B; //estresse base
    int P;// pot 
    float A; //coef atrito setor
    float L; // lim termico
    char c; // identificador compos
    int N; // nivel do piloto
    char T;// cond da pista

    scanf("%f %d %f %f %c %d %c ", &B , &P , &A , &L, &c , &N, &T );

    float vel = (P * A)/ 10.0;

    float dif_de_risco;

    float PEM; 

    float coef_comp;
    float fat_inst;

    if(c == 'S')
    {
        coef_comp = 0.45;
        fat_inst = 12.5;
    }
    if(c == 'H')
    {
        coef_comp = 0.15;
        fat_inst = 25;
    }
    if(c == 'I')
    {
        coef_comp = 0.25;
        fat_inst = 18;
    }

    if(T == 'M')
    {
        L = L * 0.85;
        dif_de_risco = vel - L;
        if(dif_de_risco > 0)
        {
            PEM = (dif_de_risco * dif_de_risco) * coef_comp ;
        }
        if(dif_de_risco <= 0)
        {
            PEM = (L - vel) * fat_inst ;
        }

        if(N >= 9)
        {
            PEM = PEM * 0.8;
        }
        else if(5 <= N && N < 9)
        {
            PEM = PEM;
        }
        else if(N < 5)
        {
            PEM = PEM * 1.15;
        }

    }
    if(T == 'G')
    {
        L = L * 1.2;
        dif_de_risco = vel - L;
        if(dif_de_risco > 0)
        {
            PEM = (dif_de_risco * dif_de_risco) * coef_comp ;
        }
        if(dif_de_risco <= 0)
        {
            PEM = (L - vel) * fat_inst ;
        }

        if(N >= 9)
        {
            PEM = PEM * 0.8;
        }
        else if(5 <= N && N < 9)
        {
            PEM = PEM;
        }
        else if(N < 5)
        {
            PEM = PEM * 1.15;
        }

    }

    if(T == 'T')
    {
        dif_de_risco = vel - L;
        if(dif_de_risco > 0)
        {
            PEM = (dif_de_risco * dif_de_risco) * coef_comp ;
        }
        if(dif_de_risco <= 0)
        {
            PEM = (L - vel) * fat_inst ;
        }
            
        if(N >= 9)
        {
            PEM = PEM * 0.8;
        }
        else if(5 <= N && N < 9)
        {
            PEM = PEM;
        }
        else if(N < 5)
        {
            PEM = PEM * 1.15;
        }
         
        PEM = PEM * 1.30;
    }


    float estresse_final = B + PEM;
    
    printf("%.2f\n", estresse_final);
    if(estresse_final > 200)
    {
        printf("DESTRUICAO TOTAL");
    }
    else if(150 <= estresse_final && estresse_final <=200)
    {
        printf("FALHA MECANICA IMINENTE");
    }
    else if(70 <= estresse_final && estresse_final < 150)
    {
        printf("RISCO MODERADO");
    }
    else if(estresse_final <70)
    {
        printf("DESEMPENHO OTIMIZADO");
    }

    return 0;
}