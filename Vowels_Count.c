#include <stdio.h>

int main() {
    char name[100];
    
    fgets(name, 99, stdin);
    
    int count = 0;
    
    for (int i = 0; i < 100; i++) {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u') {
            count++;
        }
    }
    
    printf("%d", count);
}
