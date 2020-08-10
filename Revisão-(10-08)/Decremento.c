#include <stdlib.h>
#include <stdio.h>

int main(){
    int i = 5;
    while(i > 0){
        i--;
        printf("%d ", i);
    }

    printf("\n");

    int x = 5;
    while(x > 0){
        printf("%d ", x);
        x--;
    }

    system("pause");
    return 0;
}
