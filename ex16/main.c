#include <stdio.h>

int main(){
    float sal, reaj;
    
    printf("Digite o valor do salario: ");
    scanf("%f", &sal);
    printf("Digite o percentual do reajuste: ");
    scanf("%f", &reaj);
    
    float nvsal = sal + (sal * (reaj/100));
    
    printf("O salario com reajuste é  de %.2f.", nvsal);

    return 0;
}
