//Program in C to display table of 2

#include <stdio.h>
int main() {
   
   int i, product;

   for (i = 1; i <= 10; i++) {
    product = 2 * i;
    printf("2 * %d = %d\n", i, product);
   }

   return 0;
}