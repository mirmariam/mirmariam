//Program in C to check which number is larger using ternary operator

#include <stdio.h>
int main() {
   
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    a>b?printf("a is larger"):printf("b is larger");

   return 0;
}
