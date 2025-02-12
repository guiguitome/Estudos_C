//escreva um progrma que realize a leitura dos salários pagos a um indivíduo durante um ano. Em seguida,
// o progrma deverá mostrar os valors mensais e o total anual.
#include <stdio.h>

int main(){
    //declarando a variável de vetor de salarios em um ano (12 elementos)
    float sal[12], total = 0;
    //declarando variável de controle
    int i;

    //perguntando o salario de cada mês
    for(i = 0; i <= 11; i++){
        //pedindo o salario pro usuário
        printf("Digite o salario do mês %d\n", i + 1);
        scanf("%f", &sal[i]);
    }
    
    printf("\n\n\n");
    
    //mostrando o salario e somando com o total
    for(i = 0; i <= 11; i++){

        printf("Salario do mês %d: %.2f\n", i + 1, sal[i]);

        total += sal[i];
    }

    //mostrando o total anual
    printf("\nTotal anual: %.2f", total);

    return 0;
}