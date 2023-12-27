#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, 100, stdin);
    int maxn = 0;
    char max;
    int length = strlen(str);

    for(int i = 0; i<length; i++){
        if(str[i] - '0' > maxn){
            max = str[i];
            maxn = str[i] - '0';
        }
    }
    
    printf("%c", max);
    
}
