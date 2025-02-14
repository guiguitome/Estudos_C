/*  Elaborar em linguagem C
    um programa que leia o
    nome e as 4 notas de um
    aluno, calcule e apresente
    o valor da média geral.
*/
#include <stdio.h>

struct cad_aluno{
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float nota4;
};

float media(float a, float b, float c, float d){
    float e = (a + b + c + d)/4;

    return e;
}

int main(){
    
    struct cad_aluno c;

    printf("Digite o nome do aluno:\n");
    scanf("%[^\n]", c.nome);

    printf("Digite a nota 1: \n");
    scanf("%f", &c.nota1);

    printf("Digite a nota 2: \n");
    scanf("%f", &c.nota2);

    printf("Digite a nota 3: \n");
    scanf("%f", &c.nota3);

    printf("Digite a nota 4: \n");
    scanf("%f", &c.nota4);

    printf("Nome: %s\n", c.nome);
    printf("Nota 1: %.2f\n", c.nota1);
    printf("Nota 2: %.2f\n", c.nota2);
    printf("Nota 3: %.2f\n", c.nota3);
    printf("Nota 4: %.2f\n", c.nota4);
    printf("Média: %.2f\n", media(c.nota1, c.nota2, c.nota3, c.nota4));

    return 0;
}
