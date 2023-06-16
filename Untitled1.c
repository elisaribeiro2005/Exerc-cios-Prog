/*A soma dos 15 primeiros numeros da expressão:1!/1 - 2!/3 + 3!/7 - 4!/15 + 5!/31*/
#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, mult=1, divisor=1;
    float soma=0;

        for(i=1; i<=15; i++){
            for(j=i; j>0; j--){
                mult*=j;
            }
            if(i%2 != 0)
            soma+= (mult/divisor);
            else{
                soma -= (mult/divisor);
            }
            divisor += pow(2,i);
        }
        printf("%.2f", soma);

        return 0;
}
