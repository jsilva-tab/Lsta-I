#include <stdio.h>

int main(){
    int x;
    puts("Digite um valor:");
    scanf("%d",&x);

    printf("Triplo:%d\nQuadrado:%d\nMeio:%.1f\n",x*3,x*x,((float)x)/2);
    return 0;
}