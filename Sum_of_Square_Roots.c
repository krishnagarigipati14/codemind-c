#include <stdio.h>
#include <math.h>
int main(){
    float a,b;
    scanf("%f%f", &a, &b);
    float sum = 0;
    for(float i = a; i<=b; i++){
        sum = sum+sqrt(i);
    }
    
    printf("%.2f", (sum));
}