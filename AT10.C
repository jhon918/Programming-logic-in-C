 #include <stdio.h>
 #include <math.h>
 
int main (){
float L1;
float L2;
float L3;
float A;
float T;
 
scanf("%f%f%f",&L1 ,&L2 ,&L3);
 
T = (L1+L2+L3)/2;
A = sqrt ((T*(T-L1)*(T-L2)*(T-L3)));
 
printf ("A AREA DO TRIANGULO E = %.2f\n",A);
 
 
 
return 0;
}