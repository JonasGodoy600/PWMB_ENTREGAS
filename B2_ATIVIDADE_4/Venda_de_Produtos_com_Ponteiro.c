//O codigo simula uma compra de produtos, sendo possivel a adicao de novos produtos com todos os seus detalhes e especificacoes

#include <stdio.h>
#include <string.h>
#define MAX 50

typedef struct {
    int *id;
    char (*produto)[MAX];
    char (*descricao)[MAX];
    float *preco;
    int *quantidade;
} Venda;

void imprimirLista(Venda *mercadoria, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d %s %s %.2f (Estoque: %d)\n", mercadoria->id[i], mercadoria->produto[i], mercadoria->descricao[i], mercadoria->preco[i], mercadoria->quantidade[i]);
    }
}

comprarProduto(Venda* coisas, int codigo, int quant) {
    float totalValue = 0;
    if (coisas->id[0] == 0) {
        printf("Nenhum produto cadastrado.\n");
        return totalValue;
    }

    int index = -1;
    for (int i = 0; i < coisas->id[0]; i++) {
        if (coisas->id[i] == codigo) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Produto com ID %d não encontrado.\n", codigo);
        return totalValue;
    }

    if (coisas->quantidade[index] < quant) {
        printf("Quantidade insuficiente em estoque.\n");
        return totalValue;
    }

    coisas->quantidade[index] -= quant;
    totalValue = coisas->preco[index] * quant;
    printf("Compra realizada com sucesso! Total: %.2f\n", totalValue);
    return totalValue;
}

void bubbleSort(Venda *mercadoria, int k) {
    for (int i = 0; i < k-1; i++) {
        for (int j = 0; j < k-i-1; j++) {
            if (strcmp(mercadoria->produto[j], mercadoria->produto[j+1]) > 0) {
                int tempId = mercadoria->id[j];
                mercadoria->id[j] = mercadoria->id[j+1];
                mercadoria->id[j+1] = tempId;

                char tempProduto[MAX];
                strcpy(tempProduto, mercadoria->produto[j]);
                strcpy(mercadoria->produto[j], mercadoria->produto[j+1]);
                strcpy(mercadoria->produto[j+1], tempProduto);

                char tempDescricao[MAX];
                strcpy(tempDescricao, mercadoria->descricao[j]);
                strcpy(mercadoria->descricao[j], mercadoria->descricao[j+1]);
                strcpy(mercadoria->descricao[j+1], tempDescricao);

                float tempPreco = mercadoria->preco[j];
                mercadoria->preco[j] = mercadoria->preco[j+1];
                mercadoria->preco[j+1] = tempPreco;

                int tempQuantidade = mercadoria->quantidade[j];
                mercadoria->quantidade[j] = mercadoria->quantidade[j+1];
                mercadoria->quantidade[j+1] = tempQuantidade;
            }
        }
    }
}

int main() {
    Venda produtos;
    int opcao;
    int k = 0;
    int id = 0;
    int quantos = 0;
    produtos.id = (int*)malloc(MAX * sizeof(int));
    produtos.produto = (char(*)[MAX])malloc(MAX * sizeof(char[MAX]));
    produtos.descricao = (char(*)[MAX])malloc(MAX * sizeof(char[MAX]));
    produtos.preco = (float*)malloc(MAX * sizeof(float));
    produtos.quantidade = (int*)malloc(MAX * sizeof(int));
    produtos.id[0] = 0;
    float carrinho = 0;
    float valor;
    printf("* LISTA DE PRODUTOS *\n");

    do {
        printf("1 - Cadastrar Produto\n");
        printf("2 - Comprar Produto\n");
        printf("3 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                produtos.id[k] = k + 1;
                printf("Escreva o Nome do Produto: ");
                fgets(produtos.produto[k], MAX, stdin);
                produtos.produto[k][strcspn(produtos.produto[k], "\n")] = 0; // remove o caractere de nova linhaRemova o caractere de nova linha.
                 fgets(produtos.produto[k], MAX, stdin);
                produtos.produto[k][strcspn(produtos.produto[k], "\n")] = 0; // remove o caractere de nova linhaRemova o caractere de nova linha.

                printf("Escreva a descricao do Produto: ");
                fgets(produtos.descricao[k], MAX, stdin);
                produtos.descricao[k][strcspn(produtos.descricao[k], "\n")] = 0; // remove o caractere de nova linha.

                printf("Digite o preço do produto: ");
                scanf("%f", &produtos.preco[k]);

                printf("Quantos produtos em estoque: ");
                scanf("%d", &produtos.quantidade[k]);
                k++;
                break;

            case 2:
                bubbleSort(&produtos, k);
                imprimirLista(&produtos, k);

                printf("\nQual produto desejas comprar (codigo do produto): ");
                scanf("%d", &id);
                printf("\nQuantos produtos gostaria? ");
                scanf("%d", &quantos);
                carrinho += comprarProduto(&produtos, id, quantos);
                
                printf("\nValor no Carrinho de Compras: %.2f\n", carrinho);
                break;
            
            case 3:
            printf("\nCOMPRA FINALIZADA\n");
            printf("VALOR TOTAL DAS COMPRAS: %.2f\n", carrinho);
            
            break;
            default:
                printf("\nOPCAO NAO EXISTE\n");
                break;
        }
    } while (opcao!= 3);

    free(produtos.id);
    free(produtos.produto);
    free(produtos.descricao);
    free(produtos.preco);
    free(produtos.quantidade);

    return 0;
}
