#include <stdio.h>

int main(){

    char nome[50];

    printf("Digite seu nome: \n");
    //fgets acaba quebrando linha e atrapalha
    //usando o scanf() dessa forma, conseguimos utilizar os espaços, já que a unica coisa que ele não permite é o \n, por causa do ^
    scanf("%[^\n]", nome);

    printf("Olá, %s", nome);

    return 0;
}