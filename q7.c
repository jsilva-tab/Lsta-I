//Faca um programa que leia uma quantidade de horas, 
//minutos e segundos e imprima o total de segundos.
#include <stdio.h>

int main(){
    int horas,min,seg;
    //entrada
    puts("Digite as horas:");
    scanf("%d",&horas);
    puts("Digite os minutos:");
    scanf("%d",&min);
    puts("Digite os segundos:");
    scanf("%d",&seg);

    //processamento
    int total;
    total = ((horas*60)*60)+(min*60)+seg;

    //saída
    printf("Total de segundos:%d",total);
    return 0;
}