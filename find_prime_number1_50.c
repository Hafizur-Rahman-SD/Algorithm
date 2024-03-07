#include <stdio.h>  //heder file

int main() {
    int i, j;   //take 2 variable 
    printf(" 1 to 50 prime number are : \n");   //to count prime numbers 1 to 50 end. 

    for(i=2;i<= 50;i++){   // using this loop for i that counts numbers. 
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
