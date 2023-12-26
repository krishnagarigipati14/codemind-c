#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, 99, stdin);
    char x;
    scanf("%c", &x);

    int len = strlen(str);
    int flag = 0;

    for (int i = 0; i < len; i++) {
        if(str[i]==x){
            
            printf("True
");
            printf("%d
", i);
            flag = 1;
            break;
        }
    }
    
    if(!flag){
        printf("False");
    }
    
}