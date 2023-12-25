#include <stdio.h>

int isPalindrome(char *str) {
    int length = 0;
    while (str[length] != NULL) {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char str[40];
    fgets(str, sizeof(str), stdin);

    
    for (int i = 0; i < sizeof(str); i++) {
        if (str[i] == '
') {
            str[i] = NULL;
            break;
        }
    }

    if (isPalindrome(str)) {
        printf("Palindrome
");
    } else {
        printf("Not Palindrome
");
    }

    return 0;
}
