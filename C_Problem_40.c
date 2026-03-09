/*WAP to check whether a Number is Duck or Not*/

#include <stdio.h>

void duck(int n){
    char array[100];

    int i = 0;
    int count = 1;

    while (n > 0)
    {
        int d = n % 10;
        array[i] = d + '0';
        n = n / 10;
        i++;
        count++;
    }

    for (int i = 0; i < count; i++)
    {
       char c = array[i];
       if (c == '0'){
           printf("Number is Duck !");
           return;
       }
    }
    printf("Number is Not Duck !");
}

int main() {
    int n = 3021;
    duck(n);
    return 0;
}