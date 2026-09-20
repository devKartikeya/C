/* WAP to print patterns */
#include <stdio.h>
void pattern1() {
    /*
    1
    1 2 
    1 2 3
    1 2 3 4
    1 2 3 4 5
    */

    int n = 5;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf(
    "%c", '\n'
        );
    }
}

void pattern2(){
    /*
    1 
    2 3 
    3 4 5 
    6 7 8 9
    10 11 12 13
    */

    int n = 5;
    int count = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ", count);
            count++;
        }
        printf("%c", '\n');
    }
}

int main () {
    pattern1();
    pattern2();
}