#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct cadastro{
    int codigo;
    char produto[50];
    int qtd;
    float valor;
} cad;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n, maior_etq = 0;
    char preco[50], estoque[50];
    float maior_preco = 0;
    printf("quantos produtos?\n");
    scanf("%d", &n);

    cad* c = (cad*) malloc(n * sizeof(cad));
    if(c == NULL){
        printf("Não foi possivel alocara memoria \n");
        return 1;
    }
    
    for(int i = 0; i < n; i++){
        printf("Digite o valor do %d código\n", i + 1);
        scanf("%d", &c[i].codigo);

        printf("Digite o nome do %d° produto\n", i + 1);
        getchar();
        fgets(c[i].produto, 50, stdin);

        printf("Digite a quantidade disponivel do %d° produto", i + 1);
        scanf("%d", &c[i].qtd);

        printf("Digite o valor do produto %d", i + 1);
        scanf("%f", &c[i].valor);

        if(c[i].valor > maior_preco){
            maior_preco = c[i].valor;
            strcpy(preco, c[i].produto);
        }

        if(c[i].qtd > maior_etq){
            maior_etq = c[i].qtd;
            strcpy(estoque, c[i].produto);
        }
    }

    printf("\n\n");

    printf("Produto com maior preço: %s - R$%.2f\n", preco, maior_preco);
    printf("Produto com maior estoque; %s - %d", estoque, maior_etq);

    free(c);
    c = NULL;

}