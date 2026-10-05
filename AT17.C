#include <stdio.h>
 
int main(){
        
int x, c, cin, dez, moe;
scanf("%d", &x);
 
c = x / 100;
cin = (x % 100) / 50;
dez = ((x % 100) % 50) / 10;
moe = (((x % 100) % 50)% 10);
 
printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n",c, cin, dez, moe);
 
    return 0;
}