//Q124 (File Handling)
//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().


#include <stdio.h>

int main() {
    FILE *src, *dest;
    char source[50], destination[50];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", source);

    printf("Enter destination filename: ");
    scanf("%s", destination);

    src = fopen(source, "r");
    dest = fopen(destination, "w");

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destination);

    return 0;
}
