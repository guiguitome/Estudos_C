#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[15] = "bom";
    char str2[15] = "dia";

    //essa função "cola as duas strings em uma, a partir do lugar que está o caractere do '/0' (enter)
    strcat(str1, str2);


    printf("%s", str1);

    return 0;
}