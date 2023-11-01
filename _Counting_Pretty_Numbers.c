#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int count = 0;
    for(int i = 1; i<=a; i++){
        count = 0;
        int a,b;
        scanf("%d%d", &a, &b);
        
        for(int j = a; j<=b; j++){
            int b = j%10;
            if(b==2 || b==3 || b==9){
                count = count+1;
            }
        }
        
        printf("%d
", count);
    }
    

}