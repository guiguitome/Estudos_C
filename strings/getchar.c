#include <stdio.h>

int main(){
    char cLetra;

    printf("Digite uma letra:\n");
    fgets(nome, 20, stdin);
    //essa função pega uma letra digitada no terminal e transforma ela no número equivalente na table ASCII
    cLetra = getchar();

    printf("Letra digitada %c\n", cLetra);
    printf("Na tabela ASCII %d\n", cLetra);

    return 0;
}