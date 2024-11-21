#include <stdio.h>
int main ()
{
    int a,b;
    double c=0;
    /*printf("Ingrese el primer numero");
    scanf("%i",&a);
    printf("\nIngrese el segundo numero ");
    scanf("%i",&b);
    c=a+b;
    printf("%i+%i=%i",a,b,c);
    c=a*b;
    printf("\n%i*%i=%i",a,b,c);*/
    for(int i=0;i<10;i++)
    {

        c+=(1/(((2*i)-1)*((2*i)+1)));
        
        /*c=(i*(i+1))/2;
        printf("%i\n",c);*/
    }
    printf("%lf\n",c);
    return 0;
}