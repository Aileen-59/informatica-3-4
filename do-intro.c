#include <stdio.h>

int main(){
    int count = 0;
    long long int num;

    printf("Enter a positive number:");
    scanf(" %lli", &num);

    do{
        num = num / 10;
        //n/=10

        ++count;
    }while(num != 0);

    printf("Number of digits: %d\n", count);
}