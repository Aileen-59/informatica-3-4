#include <stdio.h>

int main(){
    //Rectangle
    int height;
    int length;
     printf("Enter the rectangles height: ");
     scanf("%d", &height);
     printf("Enter the rectangle length:");
     scanf("%d", &length);
     int area = height * length;
     int perimeter = height+height+length+length;
     printf("area")

     //Temperature
     int farenheit;
     printf("Enter the temperature in farenheit: ");
     scanf("%d", &farenheit);
     int celsius = (farenheit-32)/1.8;
     printf("%d°F = %d°C\n", farenheit, celsius);

     //Minutes and hours
     int minutes=349;
     int modulus=349%60;
     int hours=349/60;
     printf("%d minutes is equal to %d hours and %d minutes\n", minutes, hours, modulus);
     
     //Circle
     int radio= 4;
     const float pi= 3.14159265359;
     int circleArea = pi * (radio*radio);
     printf("Area of a circle = %d \n", circleArea);
     scanf("%d", &circleArea);

     return 0;
}