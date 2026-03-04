/*WAP to check Password strength on basis of length*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    puts("Enter Your Password! ");
    
    fgets(str, sizeof(str), stdin); 
    if (strlen(str)< 6){
        puts("Password is WEAK!");
    } else if (strlen(str)<8){
        puts("Password is AVERAGE!");
    } else if (strlen(str)>8){
        puts("Password is STRONG!");
    }
    return 0;
}
