/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define VERTICAL 8
#define HORIZONTAL 8

int main(void)
{

int tabuleiro[HORIZONTAL][VERTICAL];
    
    int linha, coluna;
    char peca[100];
    char cor[2];
    int n[6];
    int a;
    peca[0] = 'x';
    peca[1] = 'T';
    peca[2] = 'C';
    peca[3] = 'B';
    peca[4] = 'D';
    peca[5] = 'R';
    peca[6] = 'P';
    cor[0] = 'p';
    cor[1] = 'b';
    printf("\n");
    for(linha = 0; linha<VERTICAL; linha++)
    {
        int i=1;
        int c=9; 
        n[0] = 0;
        n[1] = 0;
        n[2] = 0;
        n[3] = 0;
        n[4] = 0;
        n[5] = 0;
        n[6] = 0;
        for(coluna = 0; coluna<VERTICAL; coluna++)
        {
            printf("|");
            c--;
            
            
            if (linha == 0 && i<=5 || linha==7 && i<=5){
                if (linha < 4){
                    a=0;
                }
                if (linha > 3){
                    a=1;
                }
                
            n[i] = n[i] + 1;
            printf("%c%c%d",peca[i], cor[a], n[i]);
            i++;}
            
            if (linha == 0 && c<=3 || linha==7 && c<=3){
            n[c] = n[c] + 1;    
                printf("%c%c%d",peca[c], cor[a], n[c]);
            
            }
            if (linha == 1 || linha==6)
            {
                if (linha < 4){
                a=0;
                }
                if (linha > 3){
                a=1;
                }
                
                n[6] = n[6] + 1;
                printf("%c%c%d", peca[6], cor[a], n[6]);
            }
            
            if (linha>1 && linha<6){
            printf (" %c ",peca[0]);   
            }
            

            if(coluna==7){
                 printf("|");
             }
             
            }
            printf("\n");
            }
            
        }
    







