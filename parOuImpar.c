/*Dois amigos, Alice e Bob, estão jogando um jogo muito simples,
em que um deles grita ou "par" ou "ímpar" e o outro imediatamente
responde ao contrário, respectivamente "ímpar" ou "par". Em seguida,
ambos exibem ao mesmo tempo uma mão cada um, em que alguns dedos estão
estendidos e outros dobrados. Então eles contam o número total de dedos
estendidos. Se a soma for par, quem gritou "par" ganha. Se a soma for ímpar,
quem gritou "ímpar" ganha. Por exemplo, suponhamos que a Alice gritou "par"
e o Bob respondeu "ímpar". Em seguida, Alice não deixou nenhum dos seus dedos
estendidos, ao passo que Bob deixou três dedos estendidos. A soma então é três,
que é ímpar, portanto Bob ganhou. Seu programa deve determinar quem ganhou,
tendo a informação de quem gritou par e o número de dedos estendidos de cada um.

Entrada

A entrada contém três linhas, cada uma com um número inteiro, P, D_1 e D_2,
nesta ordem. Se P = 0 então Alice gritou "par", ao passo que se P=1 então 
Bob gritou "par". Os números D_1 e D_2 indicam, respectivamente, o número 
de dedos estendidos da Alice e do Bob.

Saída

Seu programa deverá imprimir uma única linha, contendo um único número
inteiro, que deve ser 0 se Alice foi a ganhadora, ou 1 se Bob foi o 
ganhador.

Restrições

P = 0 ou P = 1
0 ≤ D_1 ≤ 5
0 ≤ D_2 ≤ 5
*/

#include <stdio.h>

int main()
{
    int P, dedos1, dedos2, numAlice, numBob, sorteio1, sorteio2;
    
    printf("Alice fala par (0) ou Bob fala par (1)\n");
    scanf("%d", &P);
    
    printf("Número de Alice.\n");
    scanf("%d", &dedos1);
    
    printf("Número de Bob.\n");
    scanf("%d", &dedos2);
    
    if(P == 0){
        
        printf("Alice escolheu 'par'.\n");
        
        sorteio1 = (dedos1+dedos2)%2;
        
        if(sorteio1 == 0){
            
            printf("Alice ganhou. O número sorteado é par.");
            
        } else {
            
            printf("Bob ganhou. O número sorteado é ímpar.");
            
        }
        
    } else if (P == 1){
        
        printf("Bob escolheu 'par'.\n");
        
        sorteio2 = (dedos1+dedos2)%2;
        
        if(sorteio2 == 0){
            
            printf("Bob ganhou. O número sorteado é par.");
            
        } else{
            
            printf("Alice ganhou. O número sorteado é ímpar.");
            
        }
        
    }
    
    return 0;
    
}

