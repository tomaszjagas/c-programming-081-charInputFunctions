#include <stdio.h>
#include <ctype.h>

int main() {
    // getc
    char ch = '\0';
    ch = getc(stdin);
    printf("read in character %c\n", ch);

    // getchar
    int ch1 = 0;
    while ((ch = getchar()) != EOF) {
        printf("%c\n", ch1);
    }

    // fgetc
    FILE *fp = NULL;
    char c = '\0';

    fp = fopen("myFile.c", "r");

    if (fp == NULL) {
        printf("Could not open the file myFile.c");
        return 1;
    }

    printf("Reading the file myFile.c");

    while (1) {
        c = fgetc(fp); // reading the file
        if (c == EOF) {
            break;
        }
        printf("%c", c);
    }

    printf("Closing the file myFile.c");
    fclose(fp); // closing the file

    // ungetc
    char ch2 = '\0';
    while (isspace(ch2 = (char)getchar())); // read as long there are spaces
    ungetc(ch2, stdin); // put the non space character

    printf("char is %c\n", getchar());

    return 0;
}