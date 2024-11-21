#include <stdio.h>
#include <math.h>

int main()
{
        
    float a,b;
    float c;
    printf("Ingrese los catetos \n");
    scanf("%f %f",&a,&b);
    c=sqrt(pow(a,2)+pow(b,2));
    printf("La hipotenusa es %f ",c);
    return 0;
}