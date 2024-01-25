#include <stdio.h>

int prime_check(int n) {
    int flag = 1;

    for (int i = 2; i < n; i++) {
        int d = n % i;
        if (d == 0) {
            flag = 0;
            break;
        }
    }

    return flag;
}

int main() {
    int a;
    int count = 0;

    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            int x = i;
            if (prime_check(x) == 0) {
                count++;
            }
        }
    }

    printf("%d", count+1);

    return 0;
}
