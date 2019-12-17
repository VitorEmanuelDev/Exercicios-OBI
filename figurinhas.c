/*Em ano de Copa do Mundo de Futebol, o álbum de figurinhas oficial
é sempre um grande sucesso entre crianças e também entre adultos. 
Para quem não conhece, o álbum contém espaços numerados de 1 a N 
para colar as figurinhas; cada figurinha, também numerada de 1 a N, 
é uma pequena foto de um jogador de uma das seleções que jogará a 
Copa do Mundo. O objetivo é colar todas as figurinhas nos respectivos 
espaços no álbum, de modo a completar o álbum (ou seja, não deixar 
nenhum espaço sem a correspondente figurinha).

As figurinhas são vendidas em envelopes fechados, de forma que o 
comprador não sabe quais figurinhas está comprando, e pode ocorrer
de comprar uma figurinha que ele já tenha colado no álbum.

Para ajudar os usuários, a empresa responsável pela venda do álbum e 
das figurinhas quer criar um aplicativo que permita gerenciar facilmente
as figurinhas que faltam para completar o álbum e está solicitando a sua ajuda.

Dados o número total de espaços e figurinhas do álbum, e uma lista das
figurinhas já compradas (que pode conter figurinhas repetidas), sua 
tarefa é determinar quantas figurinhas faltam para completar o álbum.

Entrada

A primeira linha contém um inteiro N indicando o número total de figurinhas
e espaços no álbum. A segunda linha contém um inteiro M indicando o número
de figurinhas já compradas. Cada uma das M linhas seguintes contém um número
inteiro X indicando uma figurinha já comprada.

Saída

Seu programa deve produzir uma única linha contendo um inteiro, o número 
de figurinhas que falta para completar o álbum.

Restrições

1 ≤ N ≤ 100
1 ≤ M ≤ 300
1 ≤ X ≤ N

*/

#include <stdio.h>

int main()
{
    int N, M, X;
    
    printf("Quantas figurinhas o álbum pode conter?\n");
    scanf("%d", &N);
    
    printf("Quantas figurinhas você já comprou?\n");
    scanf("%d", &M);
    
    
    if( M < 1 && M > 300 ){
        
        if(M < 0){
            
            printf("Está devendo figurinhas?");
            
        }else if(M > 300){
            
            printf("Stop it! Get some help!");
            
        } else {
            
            printf("Você tem %d figurinhas.\n", M);
        }
        
    }
    
    if(N >= 1 && N <= 100){
        
        printf("Seu álbum tem %d espaços.\n", N);

        
    } else {
        
        if(N < 0){
            
            printf("Saporra é invisível, é?");
            
        }else if(N > 100){
            
            printf("É um album... não um vade mecum.");
        }
        
    }
        
        X = N - M;
      
    if (X < 0 || X > N){
        
        printf("Assim você me complica, né patrão!");
        
    } else {
        
        printf("Faltam %d figurinhas para completar o álbum.\n", X);
        
    }
    
    return 0;
      
}
