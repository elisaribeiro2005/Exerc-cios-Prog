/*  Faça um algoritmo que escreva os números pares no intervalo de 2 a 10 em ordem decrescente.
- while
- do… while
- for */


#include <stdio.h>

int main() 
{
    int num = 10;

    while (num >= 2) {
        if (num % 2 == 0) {
            printf("%d\n", num);
        }
        num--;
    }

    return 0;
}


#include <stdio.h>

int main() 
{
    int num = 10;

    do{
        if(num % 2 == 0){
            printf("%d\n", num);
        }
        num--;
    }while( num >= 2 );

return 0;
}


#include <stdio.h>

int main() 
{
    int num;

    for(num = 10; num >= 2; num --){
        if( num % 2 ==0){
        printf("%d\n", num);
        }
    }

    return 0;
}