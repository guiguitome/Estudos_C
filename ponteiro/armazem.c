#include <stdio.h>
#include <stdlib.h>

int main(){
    int cap;
    printf("quantos valores vc deseja armazenar?");
    scanf("%d", &cap);    
    
    double *armazem = malloc(cap * sizeof(double));

    if(armazem == NULL){
        return 1;
    }

    for(int i = 0; i < cap; i++){
        armazem[i] = rand() % 101;

        printf("%.2lf ", armazem[i]);
    }

    free(armazem);
    armazem = NULL;

    return 0;
}