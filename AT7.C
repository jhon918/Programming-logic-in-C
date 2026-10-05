#include <stdio.h>
#include <math.h>

int main (){

    float H;
    float Ab;
    float V;
    float aresta;
        
scanf("%f", &H);
scanf("%f", &aresta);
 
Ab = (3*(aresta*aresta)*(sqrt(3)))/2;
V = (Ab*H)/3;

printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", V);
       
return 0;
}