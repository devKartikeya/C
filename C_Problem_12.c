/*WAP to print AP and GP and Fibonacci Series*/

#include <stdio.h>

int ap(int, int, int);
int gp(int, int, int);
int fibonacci(int);

int ap(int a, int d, int n){
for (int i = 0; i < n; i++){
    printf("%d ,", a);
    a = a + d;
    }   printf("\n");
}

int gp(int a, int d, int n){
for (int i = 0; i < n; i++){
    printf("%d ,", a);
    a = a * d;
}
printf("\n");
}

int fibonacci(int n){
    int m = 0;
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        int z = m + x;
        printf("%d ,", z);
        m = x;
        x = z;
    }
    printf("\n");
}

int main() {
    int a, d, n;
   printf("Enter first number\n");
   scanf("%d", &a);
   printf("Enter common difference\n");
   scanf("%d", &d);
   printf("Enter length of series\n");
   scanf("%d", &n);
ap(a, d, n);
gp(a, d, n);
fibonacci(n);
    return 0;
}