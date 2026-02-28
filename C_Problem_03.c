/*WAP to Calculate the Area of a Circle*/

#include <stdio.h>

int main() {
    int radius;

    printf("Enter radius of circle !");
    scanf("%d", &radius);

    printf("Radius is %f", radius * 3.14 * radius);
    
    return 0;
}