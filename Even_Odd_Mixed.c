#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int s1 = 0;
    int s2 = 0;
    int s3 = 0;
    while(a>0){
        int b = a%10;
        if(b%2==0){
            s1++;
        }
        
        else{
            s2++;
        }
        
        s3++;
        a = a/10;
    }
    
    if(s1==s3){
        printf("Even");
    }
    else if(s2==s3){
        printf("Odd");
    }
    else{
        printf("Mixed");
    }
}