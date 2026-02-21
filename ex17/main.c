#include <stdio.h>

int main(){
    float cent;
    
    printf("Digite a temperatura em Centigrados: ");
    scanf("%f", &cent);
    
    float fah = ((9.00 * cent) + 160.00)/5.00;
    
    printf("A temperatura e %.2f F", fah);

    return 0;
}
