#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    int esum = 0;
    int osum = 0;
    int arr[n];
    
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
        
    }
    
    
    
    for(int i = 0; i<n; i++){
        
        int temp = arr[i];
        
        if(temp%2!=0){
            osum = osum+temp;
        }
        
        else if(temp%2==0){
            esum = esum+temp;
        }
        
    }
    

    
    int ab = abs(osum-esum);
    
    printf("%d", ab);
}