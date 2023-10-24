#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    
    int a = x%3;
    int b = x%5;
    int c = x%7;
    
    if(a==0 && b==0 && c==0){
        printf("PlingPlangPlong");
    }
    
    else if(a==0 && b==0){
        printf("PlingPlang");
        
    }
    
    else if(b==0 && c==0){
        printf("PlangPlong");
    }
    
    else if(a==0 && c==0){
        printf("PlingPlong");
    
    }
    
    else if(a==0){
        printf("Pling");
    }
    
    else if(b==0){
        printf("Plang");
    }
    
    else if(c==0){
        printf("Plong");
    }
    
    else{
        printf("%d", x);
    }
}