#include <stdio.h>

int main(){
    float a, b, c;
    
    printf("Digite um número real: ");
    scanf("%f", &a);
    printf("Digite um número real: ");
    scanf("%f", &b);
    printf("Digite um número real: ");
    scanf("%f", &c);
    
    float media = (a+b+c)/3;
    
    printf("A media de %.2f + %.2f + %.2f = %.2f", a, b, c, media);

    return 0;
}
