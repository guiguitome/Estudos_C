#include <stdio.h>

//strings: uma sequencia de caracteres; texto
//na linguagem C, o ENTER conta como caractere ("/0")
// é visto como array
//no scanf() é lido com %s

int main(){
    char pais[50];

    scanf("%s", pais);

    printf("%s", pais);

    return 0;
}