/* WAP to print diamond */

/* 
       *
      ***
     *****
    *******
     *****
      ***
       *
*/

#include <stdio.h>

int main(){
    int n = 10;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n - i; j++){
            printf("%c", ' ');
        }
        for (int j = 1; j <= (2 * i - 1); j++){
            printf("%c", '*');
        }
        printf("\n");
    }
    
    for (int i = 1; i <= n - 1; i++){
        for (int j = 1; j <= i; j++){
            printf("%c", ' ');
        }
        for (int j = 1; j <= (2 * (n - i) - 1); j++){
            printf("%c", '*');
        }
        printf("\n");
    }
}