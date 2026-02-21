#include <stdio.h>

int main(){
    int a, b;
    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    printf("Digite um numero inteiro: ");
    scanf("%d", &b);
    
    int sub = a - b;
    
    printf("A subtracao de %d e %d é %d", a, b, sub);
    return 0;
}
