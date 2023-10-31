#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int a;
    scanf("%d", &a);
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 1; i<=a; i++){
        sum1 = sum1+pow(i,2);
    }
    
    for(int i = 1; i<=a; i++){
        sum2 = sum2+i;
    }
    
    int t = pow(sum2, 2);
    
    int res = abs(t-sum1);
    
    printf("%d", res);
}