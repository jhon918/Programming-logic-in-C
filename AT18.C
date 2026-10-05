#include <stdio.h>
 
int main(){
 
float a,b,c,d,e,f;
float x,y,D,dx,dy;
scanf ("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
 
    D = (a*e) - (b*d);
    dx = (c*e)- (b*f);
    dy = (a*f)-(c*d);
 
    x = dx/D;
    y = dy/D;
        
    printf ("O VALOR DE X E = %.2f\n", x);
    printf ("O VALOR DE Y E = %.2f\n", y);
        return 0;
}