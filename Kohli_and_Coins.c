#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int y;
    if(a%2==0 && a%5==0){
        y = a/10;
        printf("%d", y);
    }
    
    else if(a%2!=0 && a%5==0){
        y = (a/10) + 1;
        printf("%d", y);
    } 
    
    else{
        printf("-1");
    }
}