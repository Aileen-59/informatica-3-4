#include <stdio.h>

int main(){
    char snack1[] = "Chips";
    char snack2[] = "Hersheys";
    char snack3[] = "Popcorn";
    float price1 = 20;
    float price2 = 15.96;
    float price3 = 30.15;
    int stock1 = 30;
    int stock2 = 13;
    int stock3 = 20;

    printf("Welcome to the Snack Shop!\n");
    printf("---------------------------\n");
    printf("1. %s - $%.2f - %d Available\n", snack1, price1, stock1);
    printf("2. %s - $%.2f - %d Available\n", snack2, price2, stock2);
    printf("3. %s - $%.2f - %d Available\n", snack3, price3, stock3);

    return 0;
}