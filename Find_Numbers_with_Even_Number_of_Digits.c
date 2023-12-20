#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    int c = 0;
    
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);    
    }
    
    for(int i = 0; i<n; i++){
        int count = 0;
        int x = arr[i];
        
        while(x>0){
            int d = x%10;
            count++;
            x = x/10;
        }
        
        if(count%2==0){
            c++;
        }
    }
    
    printf("%d", c);
    
}