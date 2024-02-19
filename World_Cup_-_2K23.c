#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int total = (n*(n+1)/2);
    
    printf("%d", total - n);
}