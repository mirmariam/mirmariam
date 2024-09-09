//Program in C to write into a text file (Write your name)

#include<stdio.h>

int main() {
    FILE *F = fopen("file.txt", "w");
    char name[20] = "Mariam";

    //This will display integers 0 - 10 in the file
   
        fprintf(F, "%s\n", name);
    
    fclose(F);

    return 0;
}