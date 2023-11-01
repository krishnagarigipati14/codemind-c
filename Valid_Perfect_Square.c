#include <stdio.h>

int main() {
    int n, a;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &a);
        int ch = 0;  

        for (int j = 1; j * j <= a; j++) {
            if (a == j * j) {
                ch = 1;
                break;
            }
        }

        if (ch == 1) {
            printf("True
");
        } else {
            printf("False
");
        }
    }

    return 0;
}
