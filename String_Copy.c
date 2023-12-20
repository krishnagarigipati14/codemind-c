#include <stdio.h>

int main() {
    char name[100];

    fgets(name, sizeof(name), stdin);

    for (int i = 0; i < 100; i++) {
        if (name[i] == NULL || name[i] == '
') {
            break;
        }
        printf("%c", name[i]);
    }

    return 0;
}
