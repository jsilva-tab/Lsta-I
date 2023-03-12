//Escreva um programa que leia um valor numerico inteiro 
//e apresente como resultado os seus valores sucessor e antecessor.
#include <stdio.h>

int main(){
    //entrada
    int valor;
    puts("Digite um valor inteiro:");
    scanf("%d",&valor);

    //saída
    printf("Antecessor:%d\nSucessor:%d\n",valor-1,valor+1);
    return 0;
}