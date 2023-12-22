#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    int flag = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            int count = 1;

            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = 0; 
                }
            }

            if (count == k) {
                printf("%d ", arr[i]);
                flag = 1;
            }
        }
    }

    if (flag == 0) {
        printf("-1");
    }

    return 0;
}
