#include <stdio.h>

int main(){
    //Rectangle
    int b = 4, h=16;
    int area = b*h;
    int perimeter = b*2+h*2;
     printf("area = %d \n",area);
     printf("perimeter = %d \n", perimeter);

     //Temperature
     int farenheit = 18;
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
     scanf()

     return 0;
}