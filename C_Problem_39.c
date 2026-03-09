/*WAP to find HCF of two Numbers*/

#include <stdio.h>

void hcf(int n, int m){
    int factors[50];
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0 && m % i == 0){
            factors[count] = i;
            count++;
        }
    }

    int max = factors[0];

    for (int i = 1; i < count; i++)
    {
      if (factors[i] > max){
          max = factors[i];
      }
    }
    printf("%d", max);
}

int main() {
    int n = 20;
    int m = 30;

    hcf(n, m);
    return 0;
}