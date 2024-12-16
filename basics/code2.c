// math operations
#include<stdio.h>
#include<stdlib.h>

int main(){
    int c = 0;
    float num1,num2;

    printf("Digite dos valores");
    scanf("%f %f", &num1, &num2);

    printf("1-adição  2-subtração  3-multiplicação  4-divisão");
    scanf("%d", &c);

if (c == 1) {
        printf("Resultado: %.2f\n", num1 + num2);
    } else if (c == 2) {
        printf("Resultado: %.2f\n", num1 - num2);
    } else if (c == 3) {
        printf("Resultado: %.2f\n", num1 * num2);
    } else if (c == 4) {
        if (num2 != 0) {
            printf("Resultado: %.2f\n", num1 / num2);
        } else {
            printf("Erro: Divisão por zero não é permitida.\n");
        }
    } else {
        printf("Erro: Operação inválida.\n");
    }

    return 0;  
}