//Faça um programa que pede o nome e o sobrenome, faz uma saudação e apresenta o nome completo.
#include <stdio.h>

int main(){
    
    char nome[20], sobrenome[50];

    printf("Digite seu nome: \n");
    //scanf("%s", nome);
    //scanf não é bom pra armazenar nomes compostos, pois ele pula identifica so o primeiro e pula o proximo, então se utiliza o fgets
    //fgets(variavel, tamanho, biblioteca)
    fgets(nome, 20, stdin);

    printf("Digite seu sobrenome: \n");
    //scanf("%s", sobrenome);
    fgets(sobrenome, 50, stdin);

    printf("Olá, %s %s\n\n", nome, sobrenome);

    return 0;
}