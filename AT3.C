#include <stdio.h>
int main (){

float raio_lata, altura_lata;
float PI = 3.14159;
float custo = 100;

scanf ("%f%f",&raio_lata,&altura_lata);
            //ac area do circulo
float ac = PI*(raio_lata*raio_lata);
            //al area lateral do circulo
float al = (2*PI)*(raio_lata*altura_lata);
            //at valor area total 
float at = (((2*ac)+al)*custo);

printf ("O VALOR DO CUSTO E = %.2f\n" ,at);

return 0;
}