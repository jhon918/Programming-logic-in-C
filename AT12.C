#include <stdio.h>
#include <math.h>

int main(){

double V,A,T,S,W;
double massatoneladas;
  
 
scanf("%lf%lf%lf", &massatoneladas,&A,&T); 
 
V= (A*T)*3.6;
S= ((A*(T*T))/2);
W= ((massatoneladas*(A*T)*(A*T))/2)*1000;
 
printf ("VELOCIDADE = %.2lf\n",V);
printf ("ESPACO PERCORRIDO = %.2lf\n",S);
printf ("TRABALHO REALIZADO = %.2lf\n", W);
 
 
 
return 0;
}