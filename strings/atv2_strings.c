#include <stdio.h>

int main(){

    //inicializando a variável que vai armazenar os nomes (10 nomes com 40 caracteres (max))
    char nome[10][40];
    //declarando variável de controle dos loops
    int i;

    //iniciando o loop pra escrever os 10 nomes!
    for(i = 0; i <= 9; i++){
        //pedindo pro usuário um nome, i + 1 pra não começar no "nome 0"
        printf("digite o nome %d:\n", i + 1);
        //fgets para pegar os dados do usuario
        fgets(nome[i], 40, stdin);
    }

    for(i = 0; i <= 9; i++){
        //mostrando cada nome
        printf("nome %d: %s", i + 1, nome[i]);
    }

    return 0;
}