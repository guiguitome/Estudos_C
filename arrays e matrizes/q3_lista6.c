/* Faça um programa que, dados dois vetores bidimensionais (matrizes A e B) com dimensões de no máximo
5x5 elementos, retorne:
a. a soma destas duas matrizes
b. a soma das diagonais de cada matriz
c. a multiplicação das duas matrizes */
#include <stdio.h>

int main(){
    int A[5][5] = {{1, 2, 5, 1, 4},
                   {3, 2, 4, 2, 3},
                   {4, 1, 2, 3, 7},
                   {5, 5, 2, 4, 9},
                   {1, 2, 4, 5, 1}};
    
    int B[5][5] = {{1, 2, 3, 4, 5},
                   {10, 7, 8, 9, 6},
                   {11, 12, 13, 14, 15},
                   {20, 17, 1, 3, 1},
                   {6, -2, 5, 9, 28}};
    int C[5][5];
    int i, j, k;
    int diagA = 0, diagB = 0;

    printf("soma das matrizes: \n");
    for(i = 0; i <= 4; i++){
        for(j = 0; j <= 4; j++){
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i == j){
            diagA += A[i][j];
            diagB += B[i][j];
            }
        }
    }

    printf("\n\nSoma da diagonal de A: %d\n", diagA);
    printf("Soma da diagonal de B: %d\n", diagB);

    //multiplicando a matriz
    for(i = 0; i < 5; i++){ //for das linha
        
        for(j = 0; j < 5; j++){ // for das colunas
            
            C[i][j] = 0; // zerando o elemento para não dar erro (compilador pode interpretar como lixo se não atribuir valor)
            
            for(k = 0; k < 5; k++){ //for das colunas 2
                C[i][j] += A[i][k] * B[k][j]; //fazendo o somatorio dos produtos
                                             //a variavel j faz o papel que o i faria, pois, pelo for k ta aninhado no for j
                                             // o i não vai variar até j chegar a 4.
            }
            
        }

    }

    printf("\nmultiplicação entre A e B:\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}