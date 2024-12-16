// variables type with C

#include<stdio.h>

int main(){
    //tipos inteiros
    int a;
    int b,c;
    int d,e = 1;
    //scaneando valor de a
    scanf("%d", &a);
    // escrevendo inteiros
    printf("integer: %d\n",a);
    

    // tipos flutuantes
    float f,g = 5.24126542;
    //scaneando valor de b
    scanf("%f", &f);
    // escrevendo flutuantes
    printf("floating: %f\n",f);


    // tipos char
    char h = 't';
    fflush(stdin); // para ler um valor do tipo char temos antes que "jogar o lixo fora"
    scanf("%c", &h);
    printf("char: %c",h);

    }