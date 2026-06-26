#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float dist(double x1,double y1,double x2,double y2)
{
    float ope;
    ope = sqrt(pow(x2-x1,2) + pow(y2-y1,2) );
    return ope;
}

int main() {
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    
    double result = dist(x1 , y1 , x2 ,y2);
    
    printf("%4.lf", result);
    
    return 0;
}