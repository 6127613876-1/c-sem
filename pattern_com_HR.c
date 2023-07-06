#include <stdio.h>

int main() {
    int n = 6;
    for (int i = 1; i <= n*2-1; i++) {
        for (int j = 1; j <= n*2-1; j++) {
            int min = i < j ? i : j;
            min = min < n*2-i ? min : n*2-i;
            min = min < n*2-j ? min : n*2-j;
            printf("%d ", n-min);
        }
        printf("\n");
    }
}
