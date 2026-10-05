 #include <stdio.h>
 #include <math.h>
 
int main (){

float x1, y1, x2, y2, X;
 
scanf ("%f%f%f%f",&x1,&y1,&x2,&y2);
 
X = sqrt((((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
 
printf("A DISTANCIA ENTRE A e B = %.2f\n", X);
 
return 0;
}    