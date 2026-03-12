/*WAP to check whether a number is Lychrel or Not*/

#include <stdio.h>

int reverse(int n){
    int rev = 0;
    while(n > 0){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

void checkLychrel(int n){
    int i;

    for(i = 0; i < 50; i++){   // iteration limit
        int rev = reverse(n);
        n = n + rev;

        if(n == reverse(n)){
            printf("Palindrome found: %d\n", n);
            return;
        }
    }

    printf("Suspected Lychrel Number\n");
}

int main(){
    int n = 56;

    checkLychrel(n);

    return 0;
}
