#include <stdio.h>
int main()
{
 
    float H;
    float M;
    float S;
    float TD;
 
    scanf("%f %f %f", &H, &M, &S);
 
    TD = (H*3600)+(M*60) + S;
 
    printf("O TEMPO EM SEGUNDOS E = %.0f\n",TD);
    return 0;
}