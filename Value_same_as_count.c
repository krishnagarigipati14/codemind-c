#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int arr[n];
    int arr2[n];
    int c = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);    
    }
    
    for(int i = 0; i<n; i++){
        
        int count = 0;
        
        for(int j = 0 ; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        
        if(arr[i]==count){
            arr[i] = 0;
            c++;
        }
    }
    
    printf("%d ", c);
    
}