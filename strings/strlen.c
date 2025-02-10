#include <stdio.h>
#include <string.h>

int main(){
    char texto[30] = "Hello World\n";
    puts(texto);
    
    //por meio da biblioteca string.h e da função strlen(), podemos obter o tamamnho de um string
    //diferentes formas de se obter o tamanho:
    printf("Tamanho: %d\n", strlen(texto)); 
    printf("Tamanho: %lu\n", strlen(texto));
    printf("Tamanho: %d\n", (int) strlen(texto));

    return 0;
}