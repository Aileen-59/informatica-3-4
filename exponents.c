#include <stdio.h>

int main(){
    int base;
    int exponent;
    int count = 1;
    
    printf("Enter the number of the base:");
    scanf("%d", &base);
    printf("Enter the number for the exponent");
    scanf("%d",&exponent);

    int result = base;

    do{
        result = base * result;
        ++count;
    } while(count <= exponent - 1);

    printf("%d ^ %d = %d", base, exponent, result);
    
    
}