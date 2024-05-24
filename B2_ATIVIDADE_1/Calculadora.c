#include <stdio.h>
#include <stdlib.h>

// Define a estrutura fora da função
typedef struct
{
    char funcao[1];
    float num1, num2, result;
} Calculo;

int calculadora()
{
    char funcao[20];
    
    float num1, num2, result;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Escolha entre as funções básicas (+, -, *, /): ");
    scanf("%s", funcao);  // Use %s para ler uma string
    
    if (funcao[0] == '+')  // Use == para comparação
    {
        result = num1 + num2;
    }
    else if (funcao[0] == '-')
    {
        result = num1 - num2;
    }
    else if (funcao[0] == '*')
    {
        result = num1 * num2;
    }
    else if (funcao[0] == '/')
    {
        if (num2 == 0)
        {
            printf("Impossível fazer divisão por zero.\n");
            result = 0;
        }
        else
        {
            result = num1 / num2;
        }
    }
    else
    {
        printf("ERRO: Função inválida.\n");
    }

    // Retorne o resultado
    return result;
}

int main()
{
    float resultado = calculadora();
    char funcao2[20];
    float num3, resultado2;
    printf("Resultado: %.2f\n", resultado);
    printf("Coloque outro operador ou apenas sai com o comando 's'\n");
    scanf("%s", & funcao2);
    if(funcao2[0] == 's' && funcao2[0] == 'S'){
        return 0;
    } 
    else{
    printf("Coloque o outro numero\n");
    scanf("%f", & num3);
        if (funcao2[0] == '+')  // Use == para comparação
    {
        resultado2 = resultado + num3;
    }
    else if (funcao2[0] == '-')
    {
        resultado2 = resultado - num3;
    }
    else if (funcao2[0] == '*')
    {
        resultado2 = resultado * num3;
    }
    else if (funcao2[0] == '/')
    {
        if (num3 == 0)
        {
            printf("Impossível fazer divisão por zero.\n");
            resultado2 = 0;
        }
        else
        {
            resultado2 = resultado / num3;
        }
    }
    else
    {
        printf("ERRO: Função inválida.\n");
    }
}
    printf("Resultado: %.2f\n", resultado2);
    return 0;
    }