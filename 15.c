//Program in C to display all even numbers from 1 to 100

#include <stdio.h>
int main() {
   
   int i;

   for (i = 2; i <= 100; i = i + 2) {
    printf("%d\n", i);
   }

   return 0;
}
