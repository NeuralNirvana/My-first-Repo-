//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.


#include <stdio.h>
#include <ctype.h>   // For toupper()

int main() {
    FILE *fin, *fout;
    char ch;

    // Open input file in read mode
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Could not open input.txt\n");
        return 0;
    }

    // Open output file in write mode
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(fin);
        return 0;
    }

    // Read from input and convert to uppercase
    while ((ch = fgetc(fin)) != EOF) {
        ch = toupper(ch);      // Convert lowercase → uppercase
        fputc(ch, fout);       // Write to output file
    }

    printf("Conversion complete. Check output.txt\n");

    // Close files
    fclose(fin);
    fclose(fout);

    return 0;
}
