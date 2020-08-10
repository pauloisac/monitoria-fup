#include <stdlib.h>
#include <stdio.h>

int main(){
    int vetor[10];
    int maior = 0;
    int i;

    for(i = 0; i < 10; i++){
        printf("Num: ");
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }

    printf("Maior numero: %d", maior);

    system("pause");
    return 0;
}
