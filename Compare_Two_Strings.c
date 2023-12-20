#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char name2[100];

    
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "
")] = NULL; // Remove newline character

    
    fgets(name2, sizeof(name2), stdin);
    name2[strcspn(name2, "
")] = NULL; // Remove newline character

    int flag = 0;

    for (int i = 0; i < 100; i++) {
        if (name[i] != name2[i]) {
            printf("Strings are not Equal
");
            flag = 1;
            break;
        }
        if (name[i] == NULL) {
            
            break;
        }
    }

    if (flag == 0) {
        printf("Strings are Equal
");
    }

    return 0;
}
