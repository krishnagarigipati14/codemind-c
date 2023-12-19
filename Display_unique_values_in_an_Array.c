#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    
    int flag = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    int frequency[n];
    for (int i = 0; i < n; i++) {
        frequency[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                frequency[i]++;
            }
        }
    }

    
    for (int i = 0; i < n; i++) {
        if (frequency[i] == 1) {
            printf("%d ", arr[i]);
            flag = 1;
        }
        
        
    }
    
    if(!flag){
        printf("-1");
    }

    return 0;
}
