#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int s , vf , pk , qp ;
    int viajar;
    scanf("%d %d %d %d %d", &s, &vf, &pk, &qp, &viajar);

    float tarifa;

    float sd;

    sd = s * 0.3;

    tarifa = (vf + (pk * qp) ) * 1.1 ;

    if(viajar == 1)
    {
        if(sd >= tarifa)
        {
            printf("Vai poder viajar.\n");
            printf("%.2f\n", tarifa);
            sd -= tarifa;
            printf("%.2f\n", sd);
        }
        if(sd < tarifa)
        {
            printf("Não vai poder viajar.\n");
            tarifa -= sd;
            printf("%2.f\n", tarifa);
        }
    }

    return 0;
}