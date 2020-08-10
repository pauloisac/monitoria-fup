#include <stdlib.h>
#include <stdio.h>

int main(){
    int i;

    printf("N\t N*10\t N*100\t N*1000\n\n");

    for(i = 1; i <= 10; i++){
       int n = i;
       int nx10 = i * 10;
       int nx100 = i * 100;
       int nx1000 = i * 1000;

       printf("%d\t %d\t %d\t %d\n", n, nx10, nx100, nx1000);
    }

    system("pause");
    return 0;
}
