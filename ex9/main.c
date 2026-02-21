#include <stdio.h>

int main(){
    float n;
    
    printf("Digite um numero real: ");
    scanf("%f", &n);
    
    float quart = n/4;
    
    printf("%.2f corresponde a quarta parte de %d", quart, n);

    return 0;
}
