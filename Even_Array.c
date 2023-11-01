#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int c = 1;
    
    int arr[n];
    
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i<n; i++){
        int x = arr[i];
        if(x%2!=0){
            c = 0;
            break;
        }
        
        
    }
    
    if(c==0){
        printf("False");
    }
    
    else{
        printf("True");
    }
}