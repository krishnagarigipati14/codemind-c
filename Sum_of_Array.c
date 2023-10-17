#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int y;
    int sum = 0;
    int marks[n];
    for(int i =  1; i<=n; i++){
        scanf("%d", &marks[i]);
    }
    
    for(int j = 1; j<=n; j++){
        y = marks[j];
        sum = sum+y;
    }
    
    printf("%d", sum);
}