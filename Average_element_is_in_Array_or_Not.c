#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    int count = 0;
    int arr[n];
    
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i<n; i++){
        int x = arr[i];
        sum = sum+x;
        count++;
    }
    
    int avg = sum/count;
    int c = 0;
    
    for(int i = 0; i<n; i++){
        c = 0;
        int x = arr[i];
        if(avg==x){

            c = 1;
            break;
        }
    }
    
    if(c==1){
        printf("True");
    }
    
    else{
        printf("False");
    }
}