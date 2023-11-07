#include <stdio.h>
#include <math.h>

int main(){
    int a;
    scanf("%d", &a);
    int flag = 0;
    
    for(int i = 1; i*i<=a; i++){
        if(i*i==a){
            flag=1;
            break;
        }
        
    }
    
    if(flag==0){
        printf("False");
    }
    
    else{
    	printf("True");
	}
    
}
