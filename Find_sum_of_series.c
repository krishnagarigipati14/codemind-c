#include <stdio.h>
int main(){
    float a;
    scanf("%f", &a);
    
    float inv;
    float sum = 0.0;
    
    for(float i = 1.0; i<=a; i++){
        inv = 1.0/i;
        sum = sum + inv;
    }
    
    printf("%.2f", sum);
}