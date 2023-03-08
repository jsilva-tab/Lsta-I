#include <stdio.h>

int main(){
    float conta,valorfinal;
    puts("Escreva o total da conta do restaurante:");
    scanf("%f",&conta);

    valorfinal=conta+(conta*10/100);

    printf("Total com os juros:%.2f\n",valorfinal);
    return 0;
}