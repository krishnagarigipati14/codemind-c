#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, 100, stdin);
    int count = 0;
    int length = strlen(str);

    for(int i = 0; i<length; i++){
        if(str[i]>='0' && str[i]<='9'){
            count = count + str[i] - '0';
        }
    }
    
    printf("%d", count);
}
