#include <stdio.h>

int main(){
    float a, b;
    
    printf("Digite um numero real:");
    scanf("%f", &a);
    printf("Digite um numero real:");
    scanf("%f", &b);
    
    float soma = a+b;
    float sub = a-b;
    float mult = a*b;
    float divi = a/b;
    
    printf("A soma de %.2f + %.2f é %.2f. \n", a, b, soma);
    printf("A subtracao de %.2f - %.2f é %.2f. \n", a, b, sub);
    printf("A multiplicacao de %.2f * %.2f é %.2f. \n", a, b, mult);    
    printf("A divisao de %.2f / %.2f é %.2f. \n", a, b, divi);    
    
    return 0;
}
