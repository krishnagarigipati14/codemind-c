#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
        
    }
    
    int c;
    scanf("%d", &c);
    
    int flag = 0;
    
    for(int i = 0; i<n; i++){
        
        int temp = arr[i];
        if(c==temp){
            printf("True");
            flag = 1;
            break;
            
        }
    }
    
    if(flag==0){
        printf("False");
    }
}
    
   