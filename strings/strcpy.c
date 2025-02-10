#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    printf("Entre com uma string: ");
    fgets(str1, 100, stdin);

    //para fazer com que uma string se atribua outra, pode ser usado a função strcpy(), que faz uma "copia" de uma string em outra
    //strcpy(destino, origem);
    strcpy(str2, str1);

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    
    return 0;
}
