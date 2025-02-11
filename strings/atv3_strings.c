#include <stdio.h>
#include <string.h>

int main(){
    
    //declrando uma varíavel para 10 nomes e uma variável char temporaria
    char nome[10][40], temp[40];
    //declarando as variáveis de controle
    int i, j;

    for(i = 0; i <= 9; i++){
        printf("Nome %d:\n", i + 1);
        fgets(nome[i], 40, stdin);
    }

    for(i = 0; i <= 8; i++){
        for(j = i + 1; j <= 9; j++){
            //compara 2 strings
            // str1 > str2 -> >0
            // str1 < str2 -> <0
            // str1 = str2 -> 0
            if(strcmp(nome[i], nome[j]) > 0){
                strcpy(temp, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], temp);
            }
        }
    }

    for(i = 0; i <= 9; i++){
        printf("%s\n", nome[i]);
    }
    
    return 0;
}