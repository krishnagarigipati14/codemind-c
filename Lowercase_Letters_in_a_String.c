#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str, 99, stdin);
    
    int length = strlen(str);
    int count = 0;
    
    for(int i = 0; str[i]!=NULL; i++){
        if(str[i]>='a' && str[i]<='z'){
            count++;
        }
    }
    
    printf("%d", count);
    
}