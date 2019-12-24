/*Os administradores da Fazenda Fartura planejam criar uma nova
plantação de morangos, no formato retangular. Eles têm vários 
locais possíveis para a nova plantação, com diferentes dimensões
de comprimento e largura. Para os administradores, o melhor local
é aquele que tem a maior área. Eles gostariam de ter um programa
de computador que, dadas as dimensões de dois locais, determina
o que tem maior área. Você pode ajudá-los?

Entrada

A entrada contém quatro linhas, cada uma contendo um número inteiro.
As duas primeiras linhas indicam as dimensões (comprimento e largura)
de um dos possíveis locais. As duas últimas linhas indicam as dimensões
(comprimento e largura) de um outro possível local para a plantação de
morangos. As dimensões são dadas em metros.

Saída

Seu programa deve escrever uma linha contendo um único inteiro, a área,
em metros quadrados, do melhor local para a plantação, entre os dois
locais dados na entrada.

Restrições

1 ≤ comprimento ≤ 100
1 ≤ largura ≤ 100

*/

#include <stdio.h>

int main()
{
    int area1, area2, comprimento1, comprimento2, largura1, largura2;
    
    printf("Informe as dimensões da primeira área.\n");
    scanf("%d", &comprimento1);
    scanf("%d", &largura1);
    
    printf("Informe as dimensões da segunda área.\n");
    scanf("%d", &comprimento2);
    scanf("%d", &largura2);
    
    area1 = comprimento1 * largura1;
    area2 = comprimento2 * largura2;
    
    if (area1 > area2){
        
        printf("A primeira área é o melhor investimento.");
        
    } else {
        
        printf("A segunda área é o melhor investimento.");
    }
    
    return 0;
}
