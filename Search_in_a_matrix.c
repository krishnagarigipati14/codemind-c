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
    
    int x; 
    scanf("%d", &x);
    
    int flag = 0;

    for (int i = 0; i < n; i++) {
        for(int j = 0; j<m; j++){
            int temp = arr[i][j];
            
            if(temp==x){
                printf("1");
                flag = 1;
                break;
            }
        }
    }
    
    if(flag==0){
        printf("0");
    }

    return 0;
}
