#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAX 100 // Define the maximum stack size
 
int *pilha; // Declare the stack
int topo = 0; // Initialize the top of the stack
int *basePilha; // Declare the base of the stack
 
void empilhar(int valor) {
    if (topo < MAX) {
        pilha[topo++] = valor;
    } else {
        printf("Stack overflow\n");
        exit(1);
    }
}
 
int desempilhar() {
    if (topo > 0) {
        return pilha[--topo];
    } else {
        printf("Stack underflow\n");
        exit(1);
    }
}
 
int main() {
    int X, Y, Z, T, tamanho, posicao = 0;
    char entrada[80];
 
    pilha = (int *)malloc(MAX * sizeof(int)); // Allocate memory for the stack
    if (!pilha) {
        printf("Erro de alocacao de memoria\n");
        exit(1);
    }
 
    basePilha = pilha + MAX - 1;
    printf("Calculadora\n");
 
    do {
        printf(": ");
        fgets(entrada, sizeof(entrada), stdin);
        entrada[strcspn(entrada, "\n")] = '\0'; // Remove the newline from input
        tamanho = strlen(entrada);
        if (*entrada == '\0') // If input is empty, exit the program
            continue;
        for (int p = 0; p <= tamanho; p++) {
            if (entrada[p] == ' ') {
                if(entrada[p] != '+' || entrada[p] != '-' || entrada[p] != 'x' || entrada[p] != '/'){
                posicao++;
                if (posicao == 1) {
                    X = entrada[p - 1] - '0'; // Convert char to int
                    empilhar(X);
                } else if (posicao == 2) {
                    Y = entrada[p - 1] - '0';
                    empilhar(Y);
                } else if (posicao == 3) {
                    Z = entrada[p - 1] - '0';
                    empilhar(Z);
                } else if (posicao == 4) {
                    T = entrada[p - 1] - '0';
                    empilhar(T);
                }
            }
            }
         else{

 
        
 
        switch (entrada[p]) {
            case '+':
                if (posicao == 2) {
                    X = desempilhar();
                    Y = desempilhar();
                    X = X+Y;
                    Y=0;
                    printf("Result: %d\n", X);
                    empilhar(X);
                    posicao--;
                } else
                if (posicao == 3) {
                    Y = desempilhar();
                    Z = desempilhar();
                    Y = Y+Z;
                    Z=0;
                    printf("Result: %d\n", Y);
                    empilhar(Y);
                    posicao--;
                } else
                if (posicao == 4) {
                    T = desempilhar();
                    Z = desempilhar();
                    Z = Z+T;
                    T=0;
                    printf("Result: %d\n", Z);
                    empilhar(Z);
                    posicao--;
                }
                break;

                case '-':
                if (posicao == 2) {
                    X = desempilhar();
                    Y = desempilhar();
                    X = Y-X;
                    printf("Result: %d\n", X);
                    Y = 0;
                    empilhar(X);
                    posicao--;
                }
                if (posicao == 3) {
                    Y = desempilhar();
                    Z = desempilhar();
                    Y = Z-Y;
                    printf("Result: %d\n", Y);
                    empilhar(Y);
                    Z = 0;
                    posicao--;
                }
                if (posicao == 4) {
                    T = desempilhar();
                    Z = desempilhar();
                    Z = T-Z;
                    printf("Result: %d\n", Z);
                    empilhar(Z);
                    T=0;
                    posicao--;
                }
                break;
                case 'x':
                if (posicao == 2) {
                    X = desempilhar();
                    Y = desempilhar();
                    X = X * Y; 
                    printf("Result: %d\n", X);
                    empilhar(X);
                    Y = 0;
                    posicao--;
                } else
                if (posicao == 3) {
                    Y = desempilhar();
                    Z = desempilhar();
                    Y = Y * Z;
                    printf("Result: %d\n", Y);
                    empilhar(Y);
                    Z = 0;
                    posicao--;
                } else
                if (posicao == 4) {
                    T = desempilhar();
                    Z = desempilhar();
                    Z = Z * T;
                    printf("Result: %d\n", Z);
                    empilhar(Z);
                    T = 0;
                    posicao--;
                }
                break;
                case '/':
                if (posicao == 2) {
                    if (X == 0){
                        printf("Divisao por 0, nao existe\n");
                    } else{
                    X = desempilhar();
                    Y = desempilhar();
                    X = Y / X;
                    printf("Result: %d\n", X);
                    empilhar(X);
                    Y=0;
                    posicao--;
                }
                }else 
                if (posicao == 3) {
                    if (Y == 0){
                        printf("Divisao por 0, nao existe\n");
                    } else{
                    Y = desempilhar();
                    Z = desempilhar();
                    Y = Z / Y;
                    printf("Result: %d\n", Y);
                    empilhar(Y);
                    Z = 0;
                    posicao--;
                }
                }else
                if (posicao == 4) {
                    if (Z == 0){
                        printf("Divisao por 0, nao existe\n");
                    } else{
                    T = desempilhar();
                    Z = desempilhar();
                    Z = T / Z;
                    printf("Result: %d\n", Z);
                    empilhar(Z);
                    T = 0;
                    posicao--;
                }
                }
                break;
                default:
                empilhar(atof(entrada));
                break;
        }
        }
        }
        printf("T %d\n", T);
        printf("Z %d\n", Z);
        printf("Y %d\n", Y);
        printf("X %d\n", X);
    } while (1); // Infinite loop for calculator input
}
 





