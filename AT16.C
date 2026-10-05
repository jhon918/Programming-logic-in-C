#include <stdio.h>
 
int main (){
 
int x, inv;
    
scanf ("%d", &x);
 
int centena = x/100;
int dezena = (x/10) % 10;
int unidade = x%10;
 
inv = (unidade*100)+(dezena*10)+centena;
 
printf("%d\n",inv);
 
    return 0;
}