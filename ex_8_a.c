#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize two strings
    char str1[50] = "Hello";
    char str2[50] = "World";
    // String concatenation using strcat
    strcat(str1, " ");
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    // String length using strlen
    printf("Length of str1: %lu\n", strlen(str1));
    // String copy using strcpy
    char str3[50];
    strcpy(str3, str1);
    printf("Copied string (str3): %s\n", str3);
    // String comparison using strcmp
    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal.\n");
    } else {
        printf("str1 and str2 are not equal.\n");
    }
    // String indexing
    printf("First character of str1: %c\n", str1[0]);

    // String modification
    str1[0] = 'h';
    printf("Modified string: %s\n", str1);
    return 0;
}
