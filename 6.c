//Program in C to find square root of a number entered by user

#include<stdio.h>
#include<math.h>

int main() {
    int i, x;
    printf("Enter number: ");
    scanf("%d", &i);
    
    x = sqrt(i);

    printf("The square root of %d is %d\n", i, x);


    return 0;
}
