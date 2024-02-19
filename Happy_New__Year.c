#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a,  &b);
    
    int total = (a*60) + b;
    
    int res = 1440 - total;
    
    printf("%d", res);
}