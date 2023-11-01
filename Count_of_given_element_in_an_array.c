#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    int x;
    scanf("%d", &x);
    int count = 0;
    
    for(int i = 0; i<n; i++){
        int y = arr[i];
        if(x==y){
            count++;
        }
    }
    
    printf("%d", count);
}