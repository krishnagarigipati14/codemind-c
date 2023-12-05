#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];

    // Input values for the array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int esum = 0;
    int osum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int temp = arr[i][j];
            if (temp % 2 == 0) {
                esum = temp + esum;
            } else {
                osum = temp + osum;
            }
        }
    }

    printf("%d %d", esum, osum);

    return 0;
}
