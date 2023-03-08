#include <stdio.h>
#include <stdlib.h>

int main(){
    float h,pesoideal;
    int sexo;
    puts("Digite sua altura:");
    scanf("%f",&h);
    
    puts("Selecione o seu sexo:");
    puts("1. Mulher");
    puts("2. Homem");
    scanf("%d",&sexo);
    
    switch(sexo)
    {
    case 1:
    pesoideal=62.1*h-44.7;
        break;
    case 2:
    pesoideal=72.7*h-58;
    break;
    
    default:
    puts("Opção inválida.");
        exit(1);
    }

    printf("Seu peso ideal é:%.2f\n",pesoideal);
    return 0;
}

