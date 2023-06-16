/* 30. O que h´a de errado com o programa abaixo? */
int main () 
{
int x , *p ;
x = 10;
p = x ;
printf("%d" , *p ) ;
return 0;
} 

/* O erro está na linha p = x;. O operador = é usado para atribuição de valores simples
(inteiro, float, etc.), mas não para atribuição de um valor para um ponteiro. 
Para atribuir o endereço de x a p, devemos utilizar o operador &. 

O erro está na linha p = x;, onde ocorre uma atribuição incorreta. 
O ponteiro p deve receber o endereço da variável x, não o seu valor. 
Para corrigir esse problema, basta utilizar o operador de endereço & antes de x 
para obter o endereço de x. A linha corrigida seria:

Portanto, a correção seria:

int main() {
    int x, *p;
    x = 10;
    p = &x;
    printf("%d ", *p);
    return 0;
} */

