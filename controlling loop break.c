#include <stdio.h>

int main() {
    
    printf("Example of break statement:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break;  
        }
        printf("%d ", i);
    }
    printf("\n");

  
