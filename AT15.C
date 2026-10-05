#include <stdio.h>
 
int main(){

int n;
    
scanf ("%d", &n);
 
if (n >= 0 && n <= 255) {
    
    int n1,n2,n3,n4,n5,n6,n7,n8;
 
    n1 = n % 2;
    n = n / 2;
 
    n2 = n % 2;
    n = n / 2;
 
    n3=n % 2;
    n=n / 2;
 
    n4=n % 2;
    n=n / 2;
 
    n5=n % 2;
    n=n / 2;
 
    n6=n % 2;
    n=n / 2;
 
    n7=n % 2;
    n=n / 2;
 
    n8=n % 2;
    n=n / 2;
 
 
 
printf("%d%d%d%d%d%d%d%d" ,n8,n7,n6,n5,n4,n3,n2,n1);
}
 
else{
 
 printf("Numero invalido!");
}
    return 0;
}