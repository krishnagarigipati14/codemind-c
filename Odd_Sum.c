#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    
    int arr[a];
    int sum = 0;
    int n;
    for(int i = 0; i<a; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int j = 0; j<a; j++){
        n = arr[j];
        if(n%2!=0){
            sum = sum+n;
        }
    }
    
    printf("%d", sum);
}