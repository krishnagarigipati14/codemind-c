#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (isupper(str[i])) {
            
            str[i] = tolower(str[i]);
        }
    }

    printf("%s", str);

    return 0;
}
