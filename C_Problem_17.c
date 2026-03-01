/*WAP to make your own strcpy() function*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Kartikeya";
    char input[20];

    puts("Enter something !");
    scanf("%s", &input);
   for (int i = 0; i < strlen(input); i++)
   {
      str[i] = input[i];
   }
   printf("%s", str);   
    return 0;
}