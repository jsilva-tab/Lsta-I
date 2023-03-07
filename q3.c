#include <stdio.h>

int main(){
    float real;
    int inteiro;

    puts("Digite um número real:");
    scanf("%f",&real);

    inteiro = real;

    printf("Número inteiro:%d\nNúmero real:%.1f",inteiro,real);
    return 0;
}