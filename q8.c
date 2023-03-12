//Escreva um programa que receba um valor inteiro 
//e apresente o resultado do valor lido elevado ao quadrado.
#include <stdio.h>

int main(){
    //entrada
    int inteiro,quadrado;
    puts("Digite um valor inteiro:");
    scanf("%d",&inteiro);

    //processamento
    quadrado = inteiro*inteiro;

    //saída
    printf("Seu valor ao quadrado:%d\n",quadrado);
    return 0;
}