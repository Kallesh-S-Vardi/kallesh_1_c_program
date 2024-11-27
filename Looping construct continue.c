#include <stdio.h>
int main() {
    int N;
    printf("Enter the range (N): ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            continue; 
        }
        printf("%d ", i); 
    }
    return 0;
}
