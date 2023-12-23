#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int b, i;
    
    
    scanf("%d", &b);

    
    int a[MAX_SIZE];

    
    for (i = 0; i < b; i++) {
        scanf("%d", &a[i]);
    }

    
    int hashSet[MAX_SIZE] = {0};

    
    for (i = 0; i < b; i++) {
        if (hashSet[a[i]] == 0) {
            printf("%d ", a[i]);
            hashSet[a[i]] = 1;  
        }
    }


}
