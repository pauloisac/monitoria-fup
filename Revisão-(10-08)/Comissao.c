#include <stdlib.h>
#include <stdio.h>

int main(){
    float vendas = 0;

    while(vendas != -1){
        printf("Informe a venda em Reais (-1 para terminar): ");
        scanf("%f", &vendas);

        if(vendas == -1){
            break;
        }

        float pagamento = 200 + (vendas * 0.09);

        printf("O pagamento e de: %f R$ \n", pagamento);
    }

    system("pause");
    return 0;
}
