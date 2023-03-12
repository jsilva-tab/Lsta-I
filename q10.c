//Escreva um programa que calcule e apresente o valor do volume de um 
//caixa retangular utilizando a formula VOLUME = COMPRIMENTO * LARGURA * ALTURA.
#include <stdio.h>

int main(){
    int comp,larg,h;
    puts("Informe o valor do comprimento:");
    scanf("%d",&comp);
    puts("Informe o valor da largura:");
    scanf("%d",&larg);
    puts("Informe o valor da altura:");
    scanf("%d",&h);

    printf("Volume:%d\n",comp*larg*h);
    return 0;
}