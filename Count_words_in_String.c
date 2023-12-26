#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != NULL) {
        
        if (str[i] == ' ' || str[i] == '
' || str[i] == '	') {
            
            i++;
            continue;
        }

        
        count++;

        
        while (str[i] != ' ' && str[i] != '
' && str[i] != '	' && str[i] != NULL) {
            i++;
        }
    }

    printf("%d", count);

    return 0;
}
