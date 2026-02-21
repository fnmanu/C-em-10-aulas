//conversão de valores em Real para Dólar

#include <stdio.h>

int main(){
    float real, dolar, cot;
    printf("digite o valor em real: ");
    scanf("%f", &real);
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cot);
    
    dolar = real/cot;
    
    printf("R$%.2f convertido em dólar e US$%.2f", real, dolar);

    return 0;
}
