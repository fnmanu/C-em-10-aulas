#include <stdio.h>

int main(){
    float a, b;
    
    printf("digite dois numeros reais: ");
    scanf("%f", &a);
    scanf("%f", &b);
    
    printf("Os numeros reais digitados foram %.2f e %.2f", a, b);

    return 0;
}
