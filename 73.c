//Program in C to write into a text file (Write your name)

#include<stdio.h>

int main() {
    FILE *F = fopen("file.txt", "w");
    char name[20] = "Mariam";

    //this displays name in file
    fprintf(F, "%s\n", name);
    
    fclose(F);

    return 0;
}
