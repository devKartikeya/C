/*WAP to calcualte the Area of a rectangle*/
#include <stdio.h>

int main(){
    int length, breadth, area, perimeter;

    printf("Enter length of rectangle !");
    scanf("%d", &length);
    printf("Enter breadth of rectangle !");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = (length + breadth) * 2;

    printf("Area and Perimeter of the reactangle is %dsqm %dsqm ", area , perimeter);
    return 0;
}