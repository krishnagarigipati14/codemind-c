#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int sum = 0;

    for (int i = 1; i <= a; i++) {
        int count = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 9) {
            sum = sum+1;
            printf("%d ", i);
        }
    }
    printf("
");
    printf("Total=%d", sum);

    return 0;
}
