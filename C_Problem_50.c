/* WAP to print full pyramid */

#include <stdio.h>

int main(){
    int n = 10;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= n - i; j++){
            printf("%c", ' ');
        }
        for (int j = 1; j <= (2 * i - 1); j++){
            printf("%c", '*');
        }
        printf("\n");
    }
}