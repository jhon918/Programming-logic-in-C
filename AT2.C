#include <stdio.h>
int main (){
 
float fa,pol;
scanf ("%f%f",&fa,&pol);
 
float c = (5*(fa-32)/9);
float mm = (pol*25.4);
 
printf("O VALOR EM CELSIUS = %.2f\n" "A QUANTIDADE DE CHUVA E = %.2f\n" , c, mm);
return 0;
}