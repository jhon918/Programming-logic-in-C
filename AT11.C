#include <stdio.h>
    
int main(){

float pf, pd, pi, total1, total2, preco;
 
scanf ("%f%f%f", &pf, &pd, &pi);
 
total1 = pf*(pd/100);
total2 = pf*(pi/100);
preco = total1+total2+pf;

printf("O VALOR DO CARRO E = %.2f\n", preco);    
 
return 0;
}