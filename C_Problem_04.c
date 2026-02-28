/*WAP to Convert Celsius to Fahrenheit*/

#include <stdio.h>

int main() {
    int celsius, fahrenheit;
    
    printf("Enter temperature !");
    scanf("%d", &celsius);

    fahrenheit = (9 / 5 * celsius) + 32;
    printf("Temperature in fahrenheit is %d", fahrenheit);

    return 0;
}