#include <stdio.h>
int main() {
    int i, j;
    printf(" 1 to 50 prime number are : \n");

    for(i=2;i<= 50;i++){
        int isPrime=1;

        for(j=2;j<=i/2;j++){
            if(i%j==0){
                isPrime=0;
            break;
            }
        }

        if(isPrime== 1){
            printf("%d\n",i);
        }
    }

    return 0;
}
