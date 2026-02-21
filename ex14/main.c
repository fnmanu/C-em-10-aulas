#include <stdio.h>

int main(){
    float base, altura, area, perim;
    
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);
    
    area = base * altura;
    perim = base+ altura;
    
    printf("A area do retangulo é %.2f.\n", area);
    printf("O perimetro do retangulo é %.2f \n", perim);
    
    return 0;
}
