#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    
    int arr[n];
    
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
        
    }
    
    
    
    for(int i = 0; i<n; i++){
        
        int temp = arr[i];
        
        if(temp%2==0){
            sum = sum+temp;
        }
        
    }
    

    
    printf("%d", sum);
}