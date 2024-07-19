//Program in C to find the sum of all diagonal elements of a matrix;

#include<stdio.h>

int main() {

    int a[10][10], i, j, n, sum = 0;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix row-by-row: ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum = sum + a[i][i];

        if (i != n - i - 1) {
            sum += a[i][n - i - 1];
        }
    }

    printf("The sum of all the diagonal elements of the matrix is %d\n", sum);

    return 0;
}