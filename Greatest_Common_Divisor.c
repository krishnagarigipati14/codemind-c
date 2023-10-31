#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    int x;
    for(int i = 1; i<=b; i++){
        if(a%i==0 && b%i==0){
            x = i;
        }
    }
    
    printf("%d", x);
}