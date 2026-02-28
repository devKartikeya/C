/*WAP to check student has failed or passed*/

#include <stdio.h>

int main() {
    int maths, english, computer;

    printf("Enter marks of Maths");
    scanf("%d", &maths);
    printf("Enter marks of English");
    scanf("%d", &english);
    printf("Enter marks of Computer");
    scanf("%d", &computer);

    if (maths < 33 || english < 33 || computer < 33){
        printf("Yor are failed !");
    }
    else if ((maths + english + computer)/3 < 40){
         printf("You are failed again!");
    }
    return 0;
}