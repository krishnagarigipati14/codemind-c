#include <stdio.h>
#include <string.h>

int main() {
    char str[40];
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "
")] = NULL;

    int length = strlen(str);
    printf("%d", length);

    return 0;
}
