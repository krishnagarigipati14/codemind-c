#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int rem = 52/n;
    
    int res = 52 - (n*rem);
    
    printf("%d", res);
}