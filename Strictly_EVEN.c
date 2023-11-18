#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int flag = 0; 
    
    for (int i = 0; i < n; i++) {
        int temp = arr[i];

        if (i % 2 == 0 && temp % 2 == 0) {
            flag = 1;
            
        } 
        
        else if(i%2!=0 && temp%2==0){
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        printf("True");
    } 
    else if(flag == 0) {
        printf("False");
    }

    return 0;
}
