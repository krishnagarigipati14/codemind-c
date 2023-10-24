#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    
    int max = a>b?a:b;
    int n;
    for(int i = 1; i<=max; i++){
        if(a%i==0 && b%i==0){
            n = i;
        }
    }
    
    printf("%d", n);
}