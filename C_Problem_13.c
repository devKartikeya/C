/*WAP to make a Working Calculator in C*/

#include <stdio.h>

int sum(int, int);
int subtarct(int, int);
int product(int, int);
int divide(int, int);

int sum(int x, int y){
    return x + y;
}

int subtract(int x, int y){
    return x - y;
}

int product(int x, int y){
    return x * y;
}

int divide(int x, int y){
    return x / y;
}

int main() {
    int x, y;
    printf("Enter first number");
    scanf("%d", &x);
    printf("Enter second number");
    scanf("%d", &y);

printf("%d\n",sum(x, y));
printf("%d\n",subtract(x, y));
printf("%d\n",product(x, y));
printf("%d",divide(x, y));

    return 0;
}