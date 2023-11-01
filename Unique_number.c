#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int count = 0;
    int org = a;
    int count2 = 0; // Initialize count2

    while (a > 0) {
        int b = a % 10;
        count++;
        a = a / 10;
    }

    int arr[count];

    for (int i = 0; i < count; i++) {
        int c = org % 10;
        arr[i] = c;
        org = org / 10;
    }

    for (int i = 0; i < count; i++) {
        for (int j = i+1; j < count; j++) {
            if (arr[i] == arr[j]) {
                count2 = 1; 
                break; 
            }
        }
        if (count2 == 1) {
            break; 
        }
    }

    if (count2 == 0) {
        printf("Unique Number
");
    } 
    else {
        printf("Not Unique Number
");
    }

    return 0;
}
