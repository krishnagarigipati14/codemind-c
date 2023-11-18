#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    
    
    
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
        
    }
    
    int c = 0;
    
    
    int flag = 0;
    
    for(int i = 0; i<n; i++){
        int temp = arr[i];
        
        
        if(temp%2!=0){
            c = i;
        }
    }
    
    printf("%d", c);
    
    
}
    
   