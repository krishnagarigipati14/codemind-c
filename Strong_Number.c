#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        scanf("%d", &b);
        int original = b;
        int sum = 0;

        while (b > 0) {
            int digit = b % 10;
            int factorial = 1;

            for (int j = 1; j <= digit; j++) {
                factorial *= j;
            }

            sum += factorial;
            b /= 10;
        }

        if (sum == original) {
            printf("Strong
");
        } else {
            printf("Not Strong
");
        }
    }

    return 0;
}
