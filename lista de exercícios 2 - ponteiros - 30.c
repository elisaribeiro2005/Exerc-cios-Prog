/* 29. Qual o valor de y no final do programa? Tente primeiro descobrir 
e depois verifique no computador o resultado.*/
#include <stdio.h>
int main ( )
{
int y , *p , x ;
y = 0 ;
p = &y ;
x = *p ;
x = 4 ;
(*p)++;
(*p ) += x ;
printf(" y = %d\n " , y ) ;
return 0 ;
} 

// y é inicializado com 0.
// p é um ponteiro para um inteiro que é atribuído o endereço de memória de y.
// x é inicializado com o valor armazenado no endereço apontado por p, ou seja, o valor de y (0).
// x é atualizado para 4.
// O valor no endereço apontado por p (ou seja, o valor de y) é incrementado em 1, resultando em 1.
// O valor no endereço apontado por p é somado ao valor de x, que é 4. O resultado é 5.
// O valor final de y é impresso, que é 5.


/* int y, *p, x; - Declaração das variáveis y (inteiro), p (ponteiro para inteiro) e x (inteiro).

y = 0; - Inicialização de y com o valor 0.

p = &y; - Atribuição do endereço de y para p.

x = *p; - Atribuição do valor apontado por p (valor de y) para x. Portanto, x recebe 0.

x = 4; - Atribuição do valor 4 para x.

(*p)++; - Incrementa o valor apontado por p (valor de y) em 1. Agora, y é 1.

(*p) += x; - Adiciona o valor de x (4) ao valor apontado por p (valor de y). Agora, y é 5.

printf("y = %d\n", y); - Imprime o valor de y.

return 0; - Retorna 0 para indicar que o programa foi concluído com sucesso.*/