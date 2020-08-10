#include <stdlib.h>
#include <stdio.h>

int main(){
    int i;
    for(i = 1; i <= 10; i++){
        printf("%d   ", i);
    }

    printf("\n");

    int x = 1;
    while(x <= 10){
        printf("%d   ", x);
        x++;
    }

    system("pause");
    return 0;
}
