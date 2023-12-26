#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, 99, stdin);
    

    int len = strlen(str);
    

    printf("%d", len-1);
        
    
}