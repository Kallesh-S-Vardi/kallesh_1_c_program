#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[50];

    
    printf("Length of str1: %lu\n", strlen(str1));

    
    strcpy(str2, str1);
    printf("Copied string (str2): %s\n", str2);

    
    strcat(str2, " Welcome!");
    printf("Concatenated string: %s\n", str2);

    
    if (strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}
