#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    
    printf("Digite uma string: ");
    fgets(str1, 100, stdin);

    printf("Digite outra string: ");
    fgets(str2, 100, stdin);

    //essa função serve para comparar 2 strings, ela retorna 0 se forem iguais, retorna >0 caso a primeira seja maior que a segunda, e retorna 0< se a primeira for menor que a segunda (tudo isso de acordo com a tabela ASCII)
    //compara letra por letra de cada string
    // exemplo: A<B; H>F... 
    if(strcmp(str1, str2) == 0){ 
        printf("string iguais\n");
    } else {
        printf("strings diferentes\n");
    }

    return 0;
}