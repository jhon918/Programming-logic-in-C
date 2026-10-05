#include <stdio.h>
int main (){
 
double sm,kw_gasto;
 
scanf("%lf%lf",&sm,&kw_gasto);
 
double vkw = (sm * 0.7)/100;
double cenergy = vkw * kw_gasto;
double vdesc = cenergy * 0.9;
                
printf("Custo por kW: R$ %.2lf\n" "Custo do consumo: R$ %.2lf\n" "Custo com desconto: R$ %.2lf\n",vkw,cenergy,vdesc);
 
 
return 0;
}