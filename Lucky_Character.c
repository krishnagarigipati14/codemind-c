#include <stdio.h>
int main(){
    char arr[11];
    fgets(arr,11,stdin);
    printf("%c", arr[6]);
}