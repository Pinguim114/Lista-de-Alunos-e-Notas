#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nomes[61];
    int i, notas[11];
    int numero;

    printf("Digite quantos alunos voce quer inserir: ");
    scanf("%d", &numero);

    printf("Digite os nomes dos alunos: ");
    for(i = 0; i < numero; i++){
        scanf("%s", &nomes[i]);
    }
    
    printf("Digite as nota de cada aluno na mesma ordem: ");
    for(i = 0; i < numero; i++){
        
            scanf("%d", &notas[i]);
        
    }

    for(i = 0; i < numero; i++){
    
            printf("Nome do aluno %s suas notas %d\n", nomes[i], notas[i]);

    
}
    return 0;
}