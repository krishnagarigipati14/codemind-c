#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n - 1; i++) {
        int temp = arr[i];
        int t = arr[i + 1];
        int t2 = arr[i - 1];

        if (temp % 2 == 0 && t % 2 != 0 && t2 % 2 != 0) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
