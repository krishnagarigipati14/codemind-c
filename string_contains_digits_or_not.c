#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);

    
    getchar();

    for(int j = 1; j <= t; j++){
        char str[100];
        fgets(str, 100, stdin);

        int l = strlen(str);
        int flag = 0;

        for(int i = 0; i < l; i++){
            if(str[i] >= '0' && str[i] <= '9'){
                printf("Yes
");
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            printf("No
");
        }
    }

    return 0;
}
