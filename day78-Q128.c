//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>
#include <ctype.h>   // For isalpha(), tolower()

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    // Open the file
    fp = fopen("text.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open text.txt\n");
        return 0;
    }

    // Read character by character
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch); // Convert to lowercase for easy comparison

        if (isalpha(ch)) {  // Check if it is a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    // Display result
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    // Close the file
    fclose(fp);

    return 0;
}
