#include <stdio.h>

int main(){
    int b = 4, h=16;
    int area = b*h;
    int perimeter = b*2+h*2;
     printf("area = %d \n",area);
     printf("perimeter = %d \n", perimeter);
     int farenheit = 18;
     int celsius = (farenheit-32)/1.8;
     printf("%d°F = %d°C\n", farenheit, celsius);
     int minutes=349;
     int modulus=349%60;
     int hours=349/60;
     printf("%d minutes is equal to %d hours and %d minutes\n", minutes, hours, modulus);

     return 0;
}