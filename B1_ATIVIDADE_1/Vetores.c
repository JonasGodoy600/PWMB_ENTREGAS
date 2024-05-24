//feito por Jonas Godoy Diamantino, 2 semestre ADS Tarde

#include <stdio.h>
 
int main(){
float raciocinio[6];
float gerenciamento[5];
float ingles[4];
float metodologiaAgil[6];
float javaScript[5];
float max=100;
float min=0;
int n=1;
float soma;
int cont;
float resultado[5];
float total;
int notasRestantes=4;
    //a posição do vetor esta sendo definido pelo cont que é o contador ou seja raciocionio[contador atual "1"] 
    //raciocionio[1] sendo o 1 o contador
    printf("Digite suas notas de Raciocionio Logico:\n");
    for (cont=0; cont<4;cont++)
        {
    printf("\nNotas Restantes para Cadastro: %i\n", notasRestantes);
    printf("Coloque sua Nota de Raciocinio Logico N%i: \n", n);
    n = n + 1;
    notasRestantes = notasRestantes - 1;
    scanf("%f", & raciocinio[cont]);

    if (raciocinio[cont] > 10 || raciocinio[cont] < 0) {
        printf("Nota fora dos Limites\n");
        cont = cont - 1;
        notasRestantes = notasRestantes + 1;
        n = n - 1;
    }
    
    if (raciocinio[cont] < max) {
        max = raciocinio[cont]; 
    }
    
    if (raciocinio[cont] > min) {
        min = raciocinio[cont];
        }
    }
    resultado[0] = max + min;
        
        printf("\nDigite suas notas de Gerenciamento de Projetos\n");
        n = 1;
        max = 100;
        min = 0;
        notasRestantes = 5;
        for (cont=0; cont <5;cont++)
        {
            printf("\nNotas Restantes para Cadastro: %i\n", notasRestantes);
            printf("Coloque sua notas de Gerenciamento de Projetos N%i\n", n);
            n = n + 1;
            notasRestantes = notasRestantes - 1;
            
            scanf("%f", & gerenciamento[cont]);
            if (gerenciamento[cont] > 10 || gerenciamento[cont] < 0) {
                printf("Nota Fora dos Limites\n");
                cont = cont - 1;
                notasRestantes = notasRestantes + 1;
                n = n - 1;
            }
            if (gerenciamento[cont] < max) {
                max = gerenciamento[cont];
            }
            if (gerenciamento[cont] > min) {
                min = gerenciamento[cont];
            }
        }
        resultado[1] = max + min;
        n = 1;
        max = 100;
        min = 0;
        notasRestantes = 4;
        printf("\nDigite suas notas de Lingua Inglesa\n");
        
                for (cont=0;cont<4;cont++)
                {
                    printf("\nNotas Restantes para Cadastro: %i\n", notasRestantes);
                    printf("Coloque as notas de Lingua Inglesa N%i\n", n);
                    
                    n = n + 1;
                    notasRestantes = notasRestantes - 1;
                    scanf("%f", & ingles[cont]);
                    if (ingles[cont] > 10 || ingles[cont] < 0) {
                        printf("Nota Fora dos Limites\n");
                        cont = cont - 1;
                        notasRestantes = notasRestantes + 1;
                        n = n - 1;
                    }
                    if (ingles[cont] < max) {
                        max = ingles[cont];
                    }
                    if (ingles[cont] > min) {
                        min = ingles[cont];
                    }
                }
                resultado[2] = max + min;
                n = 1;
                max = 100;
                min = 0;
                notasRestantes = 6;
                printf("\nDigite suas notas de Metodologia Agil\n");
                    for(cont=0;cont<6;cont++)
                    {
                        printf("\nNotas Restantes para Cadastro: %i\n", notasRestantes);
                        printf("Coloque as notas de Metodologia Agil N%i\n",n);
                        n = n + 1;
                        notasRestantes = notasRestantes - 1;
                        scanf("%f", & metodologiaAgil[cont]);
                        if (metodologiaAgil[cont] > 10 || metodologiaAgil[cont] < 0) {
                            printf("Nota fora dos Limites\n");
                            cont = cont - 1;
                            notasRestantes = notasRestantes + 1;
                            n = n - 1;
                        }
                        if (metodologiaAgil[cont] < max) {
                            max = metodologiaAgil[cont]; 
                        }
                        if (metodologiaAgil[cont] > min) {
                            min = metodologiaAgil[cont];
                        }
                    }
                    resultado[3] = max + min;
                    n = 1;
                    max = 100;
                    min = 0;
                    notasRestantes = 5;
                printf("\nDigite suas notas de JavaScript\n");
                    for(cont=0;cont<5;cont++)
                    {
                        printf("\nNotas Restantes para Cadastro: %i\n", notasRestantes);
                        printf("Coloque as notas de JavaScript N%i\n",n);
                        n = n + 1;
                        notasRestantes = notasRestantes - 1;
                        scanf("%f", & javaScript[cont]);
                        if (javaScript[cont] > 10 || javaScript[cont] < 0) {
                            printf("Nota fora dos Limites\n");
                            cont = cont - 1;
                            notasRestantes = notasRestantes + 1;
                            n = n - 1;
                        }
                        if (javaScript[cont] < max) {
                            max = javaScript[cont]; 
                        }
                        if (javaScript[cont] > min) {
                            min = javaScript[cont];
                        }
                    }
                        resultado[4] = max + min;
                
    for (cont=0; cont<4;cont++){
    printf("Nota de Raciocinio Logico: %.2f \n", raciocinio[cont]);
    soma = soma + raciocinio[cont];
    
    }
    soma = soma - resultado[0];
    total = total + soma;
    printf("Soma raciocinio: %.2f \n\n", soma);
    
    
        soma = 0;
        for (cont=0; cont<5;cont++){
        printf("Nota de Gerenciamento de Projetos: %.2f \n", gerenciamento[cont]);
        soma = soma + gerenciamento[cont];
        }
        soma = soma - resultado[1];
        total = total + soma;
        printf ("Soma Gerenciamento de Projetos: %.2f \n\n", soma);
    
    
            soma = 0;
            for (cont=0; cont<4;cont++){
            printf("Nota de Lingua Inglesa: %.2f \n", ingles[cont]);
            soma = soma + ingles[cont];
            }
            soma = soma - resultado[2];
            total = total + soma;
            printf ("Soma Lingua Inglesa: %.2f \n\n", soma);
                
                soma = 0;
                for (cont=0; cont<6;cont++){
                printf("Nota de Metodologia Agil: %.2f \n", metodologiaAgil[cont]);
                soma = soma + metodologiaAgil[cont];
                }
                soma = soma - resultado[3];
                total = total + soma;
                printf("Soma Metodologia Agil: %.2f \n\n", soma);
                    
                    soma = 0;
                    for (cont=0; cont<5;cont++){
                    printf("Nota de JavaScript: %.2f \n", javaScript[cont]);
                    soma = soma + javaScript[cont];
                    }
                    soma = soma - resultado[4];
                    total = total + soma;
                    printf("Soma JavaScript: %.2f \n\n", soma);
                    
                    printf("Total das notas: %.2f \n", total);
    return 0;
}

