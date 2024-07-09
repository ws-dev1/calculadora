#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 3

float somar(float n1, float n2);
float subtrair(float n1,  float n2);
float multiplicar(float n1,  float n2);
float dividir(float n1,  float n2);

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Portuguese");
    int operador;
    float resultado, n1, n2;
    int validando_opcao = 1;
    char opcao_1[N];

    while(validando_opcao != 0){

        printf("\n1 - Somar\n2 - Subtrair\n3 - multiplicar\n4 - Dividir\n");

        printf("Digite qual operação deseja:\n");
        scanf("%d",  &operador);

        printf("Digite o primeiro numero:\n");
        scanf("%f", &n1);

        printf("Digite o segundo numero:\n");
        scanf("%f", &n2);

        switch (operador)
        {
        case 1:
            resultado = somar(n1, n2);
            printf("O resultado foi %.2f\n", resultado);
            break;
        case 2:
            resultado = subtrair(n1, n2);
            printf("O resultado foi %.2f\n", resultado);
            break;
        case 3:
            resultado = multiplicar(n1, n2);
            printf("O resultado foi %.2f\n", resultado);
            break;
        case 4:
            resultado = dividir(n1, n2);
            printf("O resultado foi %.2f\n", resultado);
            break;
        
        default:
            break;
        }
        
        printf("\nDeseja encerrar? (sim/nao):\n");
        scanf("%s", &opcao_1);

        validando_opcao = strcmp(opcao_1, "sim");

        if(validando_opcao == 0){
            printf("\nObrigado, encerramos!!!");
        }
    }
}

float somar(float n1, float n2){
    return n1 + n2;
}

float subtrair(float n1,  float n2){
    return n1 - n2;
}

float multiplicar(float n1,  float n2){
    return n1 * n2;
}

float dividir(float n1,  float n2){
    return n1 / n2;
}