#include <stdio.h>

int main (){

float a,b,c,d;

scanf("%f%f%f%f",&a,&b,&c,&d);
 
float m = (a*d)-(b*c);

printf ("O VALOR DO DETERMINANTE E = %.2f\n",m);
            
return 0;
}