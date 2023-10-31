#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    for (int i = a; i <= b; i++) {
        int original = i;
        int reverse = 0;
        int temp = i;  

        while (temp > 0) {
            int y = temp % 10;
            reverse = reverse * 10 + y;
            temp = temp / 10;
        }

        if (original == reverse) {
            printf("%d ", original);
        }
    }
    
    return 0;
}
