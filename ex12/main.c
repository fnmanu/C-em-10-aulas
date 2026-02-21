#include <stdio.h>
#include <math.h>

int main(){
    float n;
    
    printf("Digite um numero real: ");
    scanf("%f", &n);
    
    float quad = pow(n, 2);

    printf("O quadrado de %.2f é %.2f.", n, quad);

    return 0;
}
