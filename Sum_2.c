#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int sum = 0;
    
    for(int i = a; i<=b; i++){
        if(i%c==0 && i%d!=0){
            sum = sum+i;
        }
    }
    
    printf("%d", sum);
}