#include <stdio.h>

int main(){
    float prod, desc;
    
    printf("Digite o valor do produto: ");
    scanf("%f", &prod);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &desc);
    
    float nvprod = prod - (prod * (desc/100));
    
    printf("O valor do produto era %.2f, o desconto foi de %.2f%. O valor do produto com desconto é %.2f.", prod, desc, nvprod);

    return 0;
}
