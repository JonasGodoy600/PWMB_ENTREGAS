/*
Programa armazena nome e nota de alunos, verifica se estão aprovados pelo valor da nota e mostra a lista de alunos 
em ordem alfabetica (Emily Chargas me auxiliou para a produção do codigo)
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char aluno[50];
    double nota;
    char aprovacao[50];
    
} Lista;

Lista SetIndividuo(char pessoa[], double nota){
    Lista func;
    strcpy(func.aluno, pessoa); 
    
    func.nota = nota;
    
    //verificar aprovacao do individuo
    if(nota >= 6)
    {
        strcpy(func.aprovacao,"Aprovado");
        
    } else {
        strcpy(func.aprovacao,"Reprovado");
    }
    return func;
}

int maxNome(Lista aluno[], int n){
    int max = 0;
    for (int i = 0; i < n; i++){
        
        int min = strlen(aluno[i].aluno);
        if (min > max){
            max = min;
        }
    }
    return max;
}
 
 void bubbleSort(Lista alunos[], int n){
    int contA, contB;
    for (contA = 0; contA < n - 1; contA++){
        for (contB = 0; contB < n - contA - 1; contB++){
            if (strcmp(alunos[contB].aluno, alunos[contB + 1].aluno) > 0){
                Lista auxilio = alunos[contB];
                alunos[contB] = alunos[contB + 1];
                alunos[contB + 1] = auxilio;
            }
        }
    } 
 }
 
 void imprimirLista(Lista alunos[], int n){
    int maxName = maxNome(alunos,n);
    printf("\nNOME");
    for (int i = 5; i <maxName; i++){
        printf(" "); 
    }
    printf("\tNOTA-ALUNO\tSITUAÇÃO\n");
    
    for(int i = 0; i < n; i++){
        toupper(alunos[i].aluno);
         printf("%-*s\t%.2f\t%s\n", maxName, alunos[i].aluno, alunos[i].nota, alunos[i].aprovacao);
    }
 }
 
int main() {
    
    int tamanhoNome=0;
    int i;
    int contadorAluno=0, escolha=10;
    Lista alunos[50] = {0};
    printf("* LISTA DE ALUNOS *\n");
    
    do{
        printf("1 - Cadastrar Aluno\n");
        printf("2 - Mostrar Lista de Alunos\n");
        printf("3 - Sair\n");
        scanf("%d", &escolha);
        switch(escolha){
        case 1:    
        if (escolha <50){
         char nome [50];
         double nota;
         
        printf("Digite o nome do aluno: ");
        scanf(" %[^\n]", nome); 
        for (i = 0; nome[i] != '\0'; i++) {
        nome[i] = toupper(nome[i]); // Converte cada caractere para maiúscula
    }
        printf("Digite a nota do aluno: ");
        scanf("%lf", &nota);

        alunos[tamanhoNome] = SetIndividuo(nome, nota); 
        tamanhoNome++;
        contadorAluno = contadorAluno + 1;
        printf("\nCadastro feito com sucesso!\n");
        } else {
            printf("Lista Cheia!\n");
        }
        break;
        
        
        case 2:
        bubbleSort(alunos, tamanhoNome);
        imprimirLista(alunos, tamanhoNome);
        printf("\nNumero de Alunos %d\n\n", contadorAluno);
        break;

        
        
        default:
        printf("\nOpcao nao encontrada");
        }
        }
        while(escolha != 3);
        printf("\nLista Fechada");
        return 0;
    }


