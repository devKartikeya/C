/* WAP to Calculate Average age */

#include <stdio.h>

int main(){

    int age1, age2, age3, avg;

    printf("Enter age of first person");
    scanf("%d", &age1);
    printf("Enter age of second person");
    scanf("%d", &age2);
    printf("Enter age of third person");
    scanf("%d", &age3);

    avg = (age1 + age2 + age3) / 3;
    printf("Average is %d", avg);

    return 0;

}