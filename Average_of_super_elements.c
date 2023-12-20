#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int c = 0;
    int sum = 0;
    
    int flag = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int count = 0;
        
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (arr[i] == count) {
            int f = arr[i];
            arr[i] = 0;
            c++;
            sum = sum + f;
            flag = 1;
        }
    }
    
    
    if(flag==0){
        printf("-1");
    }
    
   else  printf("%.2f", ((float)sum / c));

    return 0;
}
