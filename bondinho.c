/*A turma do colégio vai fazer uma excursão na serra e todos
os alunos e monitores vão tomar um bondinho para subir até o
pico de uma montanha. A cabine do bondinho pode levar 50 pessoas
no máximo, contando alunos e monitores, durante uma viagem até
o pico. Neste problema, dado como entrada o número de alunos A
e o número de monitores M, você deve escrever um programa que
diga se é possível ou não levar todos os alunos e monitores em
apenas uma viagem e em quantas viagens seria possível levar todo
mundo.


Entrada

A primeira linha da entrada contém um inteiro A, representando
a quantidade de alunos. A segunda linha da entrada contém um
inteiro M, representando o número de monitores.

Saída

Seu programa deve imprimir uma linha contendo o caractere S se
é possível levar todos os alunos e monitores em apenas uma viagem,
ou o caractere N caso não seja possível.

Restrições

1 ≤ A ≤ 50
1 ≤ M ≤ 50

*/

#include <stdio.h>

int main()
{
    int alunos, monitores, total, viagens;
    
    printf("Quantos monitores vão?\n");
    scanf("%d", &monitores);
    
    printf("Quantos alunos vão?\n");
    scanf("%d", &alunos);
    
    viagens = total/50;
    
    total = alunos+monitores;
    
    if((alunos > 0 && monitores > 0)){
        
        if (total <= 50){
                
            printf("Uma viagem basta para levar todo mundo. São %d pessoas.\n", total);
                
        } else if(total > 50 && total <= 100){
                    
            printf("Serão necessárias 2 viagens.\n");
                    
        } else if(total >= 100 && total < 150){ 
                    
            printf("Serão necessárias 3 viagens.\n");
                    
        } else if(total >= 150 && total < 200){ 
                    
            printf("Serão necessárias 4 viagens.\n");
                    
        } else if(total >= 200 && total <= 250){ 
                    
            printf("Serão necessárias 5 viagens.\n");
                    
        } else if(total > 250) {
            
            printf("É uma excursão escolar, os trezentos de Esparta ou o êxodo do Egito, consagrada(o)?\n");
            
        }
    
    }

    return 0;
}


