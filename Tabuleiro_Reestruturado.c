//este codigo é uma readaptação do antigo tabuleiro de xadrez feito anteriormente, porém modelarizado com a ideia de ter 
//poucas funções no campo main, e ter todas as funções separadas para serem chamandas durante a execução, unicas coisas
//presentes na função main é a possibilidade do usuario selecionar o lance que deseja ver.
#include <stdio.h>
#include <string.h>

#define VERTICAL 8
#define HORIZONTAL 8

typedef struct{
    char peca[100];
    char cor[2]; 
    int jogada;
}Tabuleiro;

void mostrarTabuleiro1(Tabuleiro jogada){
    char tabuleiro[HORIZONTAL][VERTICAL];

    
    for(int i = 0; i < HORIZONTAL; i++) {
        for(int j = 0; j < VERTICAL; j++) {
            tabuleiro[i][j] = ' ';
        }
    }

    
    jogada.peca[0] = 'T'; 
    jogada.peca[1] = 'C'; 
    jogada.peca[2] = 'B'; 
    jogada.peca[3] = 'D'; 
    jogada.peca[4] = 'R';
    jogada.peca[5] = 'C'; 
    jogada.peca[6] = 'B'; 
    jogada.peca[7] = 'T'; 
    jogada.peca[8] = 'P'; 
    jogada.cor[0] = 'B'; 
    jogada.cor[1] = 'P'; 

    
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(i == 0 || i==7) {
                tabuleiro[i][j] = jogada.peca[j];
            } else if(i == 1 || i == 6){
                tabuleiro[i][j] = jogada.peca[8];
            } else {
                 
            }
        }
    }

    
    printf("\n");
    for(int linha = 0; linha < VERTICAL; linha++) {
        for(int coluna = 0; coluna < HORIZONTAL; coluna++) {
            printf("|%c", tabuleiro[linha][coluna]);
        }
        printf("|\n");
    }
}

void mostrarTabuleiro2(Tabuleiro jogada){
    char tabuleiro[HORIZONTAL][VERTICAL];

    
    for(int i = 0; i < HORIZONTAL; i++) {
        for(int j = 0; j < VERTICAL; j++) {
            tabuleiro[i][j] = ' ';
        }
    }

   
    jogada.peca[0] = 'T'; 
    jogada.peca[1] = 'C'; 
    jogada.peca[2] = 'B'; 
    jogada.peca[3] = 'D'; 
    jogada.peca[4] = 'R';
    jogada.peca[5] = 'B'; 
    jogada.peca[6] = 'C'; 
    jogada.peca[7] = 'T'; 
    jogada.peca[8] = 'P'; 
    jogada.cor[0] = 'B'; 
    jogada.cor[1] = 'P'; 

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(i == 0  || i==7) {
                tabuleiro[i][j] = jogada.peca[j];
            } else if(i == 1 && j != 4 || i == 6 && j != 4){ //jogada peão na casa e4
                tabuleiro[i][j] = jogada.peca[8];
            } else if(i == 3 && j == 4 || i == 4 && j == 4){ //jogada peão na casa e5
                tabuleiro[i][j] = jogada.peca[8];
                 
            }
        }
    }

    
    printf("\n");
    for(int linha = 0; linha < VERTICAL; linha++) {
        for(int coluna = 0; coluna < HORIZONTAL; coluna++) {
            printf("|%c", tabuleiro[linha][coluna]);
        }
        printf("|\n");
    }
}

void mostrarTabuleiro3(Tabuleiro jogada){
    char tabuleiro[HORIZONTAL][VERTICAL];

    
    for(int i = 0; i < HORIZONTAL; i++) {
        for(int j = 0; j < VERTICAL; j++) {
            tabuleiro[i][j] = ' ';
        }
    }

   
    jogada.peca[0] = 'T'; 
    jogada.peca[1] = 'C'; 
    jogada.peca[2] = 'B'; 
    jogada.peca[3] = 'D'; 
    jogada.peca[4] = 'R';
    jogada.peca[5] = 'B'; 
    jogada.peca[6] = 'C'; 
    jogada.peca[7] = 'T'; 
    jogada.peca[8] = 'P'; 
    jogada.cor[0] = 'B'; 
    jogada.cor[1] = 'P'; 

    
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(i == 0 && j != 1  || i==7 && j != 5) { // tira cavalo e  o bispo
                tabuleiro[i][j] = jogada.peca[j];
            }
            if(i == 1 && j != 4 || i == 6 && j != 4){ //tira os peões
                tabuleiro[i][j] = jogada.peca[8];
            } else{
                
            }
            
             if(i == 3 && j == 4 || i == 4 && j == 4){ //jogada peão branco na casa e4 e peão preto na casa e5
                tabuleiro[i][j] = jogada.peca[8];
                 
            }
            if (i == 2 && j == 2){
                tabuleiro[i][j] = jogada.peca[1];
            }
            if (i == 4 && j ==2){
                tabuleiro[i][j] = jogada.peca[2];
            }
        }
    }

    
    printf("\n");
    for(int linha = 0; linha < VERTICAL; linha++) {
        for(int coluna = 0; coluna < HORIZONTAL; coluna++) {
            printf("|%c", tabuleiro[linha][coluna]);
        }
        printf("|\n");
    }
}

void mostrarTabuleiro4(Tabuleiro jogada){
    char tabuleiro[HORIZONTAL][VERTICAL];

    
    for(int i = 0; i < HORIZONTAL; i++) {
        for(int j = 0; j < VERTICAL; j++) {
            tabuleiro[i][j] = ' ';
        }
    }

   
    jogada.peca[0] = 'T'; 
    jogada.peca[1] = 'C'; 
    jogada.peca[2] = 'B'; 
    jogada.peca[3] = 'D'; 
    jogada.peca[4] = 'R';
    jogada.peca[5] = 'B'; 
    jogada.peca[6] = 'C'; 
    jogada.peca[7] = 'T'; 
    jogada.peca[8] = 'P'; 
    jogada.cor[0] = 'B'; 
    jogada.cor[1] = 'P'; 

    
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(i == 0 && j != 1 && j !=6  || i==7 && j != 5 && j != 3) { // tira cavalo e  o bispo
                tabuleiro[i][j] = jogada.peca[j];
            }
            if(i == 1 && j != 4 || i == 6 && j != 4){ //tira os peões
                tabuleiro[i][j] = jogada.peca[8];
            } else{
                
            }
            
             if(i == 3 && j == 4 || i == 4 && j == 4){ //jogada peão branco na casa e4 e peão preto na casa e5
                tabuleiro[i][j] = jogada.peca[8];
                 
            }
            if (i == 2 && j == 2){
                tabuleiro[i][j] = jogada.peca[1];
            }
            if (i == 2 && j == 5){
                tabuleiro[i][j] = jogada.peca[1];
            }
            if (i == 4 && j == 2){
                tabuleiro[i][j] = jogada.peca[2];
            }
            if (i == 3 && j == 7){
                tabuleiro[i][j] = jogada.peca[3];
            }
        }
    }


    
    printf("\n");
    for(int linha = 0; linha < VERTICAL; linha++) {
        for(int coluna = 0; coluna < HORIZONTAL; coluna++) {
            printf("|%c", tabuleiro[linha][coluna]);
        }
        printf("|\n");
    }
}

void mostrarTabuleiro5(Tabuleiro jogada){
    char tabuleiro[HORIZONTAL][VERTICAL];

    
    for(int i = 0; i < HORIZONTAL; i++) {
        for(int j = 0; j < VERTICAL; j++) {
            tabuleiro[i][j] = ' ';
        }
    }

   
    jogada.peca[0] = 'T'; 
    jogada.peca[1] = 'C'; 
    jogada.peca[2] = 'B'; 
    jogada.peca[3] = 'D'; 
    jogada.peca[4] = 'R';
    jogada.peca[5] = 'B'; 
    jogada.peca[6] = 'C'; 
    jogada.peca[7] = 'T'; 
    jogada.peca[8] = 'P'; 
    jogada.cor[0] = 'B'; 
    jogada.cor[1] = 'P'; 

    
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(i == 0 && j != 1 && j !=6  || i==7 && j != 5 && j != 3) { // tira cavalo e  o bispo
                tabuleiro[i][j] = jogada.peca[j];
            }
            if(i == 1 && j != 4 && j !=5 || i == 6 && j != 4){ //tira os peões
                tabuleiro[i][j] = jogada.peca[8];
            } else{
                
            }
            
             if(i == 3 && j == 4 || i == 4 && j == 4){ //jogada peão branco na casa e4 e peão preto na casa e5
                tabuleiro[i][j] = jogada.peca[8];
                 
            }
            if (i == 2 && j == 2){
                tabuleiro[i][j] = jogada.peca[1];
            }
            if (i == 2 && j == 5){
                tabuleiro[i][j] = jogada.peca[1];
            }
            if (i == 4 && j == 2){
                tabuleiro[i][j] = jogada.peca[2];
            }
            if (i == 1 && j == 5){
                tabuleiro[i][j] = jogada.peca[3];
            }
        }
    }
    printf("\n");
    for(int linha = 0; linha < VERTICAL; linha++) {
        for(int coluna = 0; coluna < HORIZONTAL; coluna++) {
            printf("|%c", tabuleiro[linha][coluna]);
        }
        printf("|\n");
    }
}
    
int main(void) {
    Tabuleiro jog;
    int escolha = 20;
    do{
    printf("Escolha o lance que deseje ver no pastorzinho (maximo 5 lnaces, 0 encerra o programa): \n");
    scanf("%d",&escolha);
    
    switch(escolha){
        case 1:
        mostrarTabuleiro1(jog);
        break;
    
        case 2:
        mostrarTabuleiro2(jog);
        break;
    
        case 3:
        mostrarTabuleiro3(jog);
        break;
        
        case 4:
        mostrarTabuleiro4(jog);
        break;
        
        case 5:
        mostrarTabuleiro5(jog);
        break;
        
        default:
        printf("\nsem lances\n");
    }
    }while (escolha!=0);
    return 0;
}



















