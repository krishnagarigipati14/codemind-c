#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    
    for(int i = a; i>=1; i--){
        for(int j = i; j>=1; j--){
            int x = i;
            printf("%c ", x+64);
            
        }
        
        printf("
");
    }
}