//Faça um programa que dado o vetor unidimensional [2; 4; 35; 50; 23; 17; 9; 12; 27; 5] retorne:
/* a. maior valor
b. média dos valores
c. os valores dispostos em ordem crescente
d. subconjunto de valores primos que está contido no vetor */
#include <stdio.h>
#include <string.h>

int main(){
    
    int v[10] = {2, 4, 35, 50, 23, 17, 9, 12, 27, 5};
    int maior_valor = 0;
    float soma_media = 0;
    int i, j, x;
    
    for(i = 0; i < 10; i++){
        if(v[i] > maior_valor){
            maior_valor = v[i];
        }
    }

    printf("maior número: %d\n", maior_valor);
    
    for(i = 0; i < 10; i++){
        soma_media = soma_media + v[i];
    }
    
    printf("media: %.2f\n", soma_media/10);

    for(i = 0; i < 9; i++){
        
        for(j = i + 1; j < 10; j++){
            
            if(v[i] > v[j]){
                x = v[i];
                v[i] = v[j];
                v[j] = x;   
            }

        }

    }
    printf("ordem crescente: ");
    for(i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    printf("valores primos: ");
    for(i = 0; i < 10; i++){
        for(j = 2; j * j <= v[i]; j++){
            if(v[i] % j != 0){
                printf("%d ", v[i]);
            }
        }
    }

    return 0;
}