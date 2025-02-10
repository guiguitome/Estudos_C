#include <stdio.h>
#include <locale.h>

int main(){
    
    char nome[30], sobrenome[50];
    
    //puts pode substituir o printf, ele quebra linha sem precisar do \n, porem ele aceita so um argumento
    puts("Digite seu nome:");
    fgets(nome, 30, stdin);

    puts("Digite seu sobrenome");
    fgets(sobrenome, 50, stdin);

    printf("Olá, %s %s", nome, sobrenome);
}