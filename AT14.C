#include <stdio.h>
 
int main(){
 
int input, res, x1, x2, x3;
    
scanf("%d", &input);
    
x1 = input/100;
x2 = (input%100)/10;
x3 = ((input%100)%10);
    
int aux = (x1 + (x2*3) + (x3*5))%7;
x1 = x1*1000;
x2 = x2*100;
x3 = x3*10;
res = x1 + x2 + x3 + aux;
    
printf("O NOVO NUMERO E = %d\n", res);
 
 
 
return 0;
}