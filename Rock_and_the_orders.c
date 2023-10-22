#include <stdio.h>
int main(){
    int d,c,a1,a2,a3,b1,b2,b3;
    scanf("%d%d%d%d%d%d%d%d", &d, &c, &a1, &a2, &a3, &b1, &b2, &b3);
    int wc, wnc;
    if(a1+a2+a3 >=150 && b1+b2+b3>=150){
        wc = a1+a2+a3+b1+b2+b3+c;
        wnc = a1+a2+a3+b1+b2+b3+d+d;
        if(wc<wnc){
            printf("YES");
        }
        
        else{
            printf("NO");
        }
    }
    
    else if((a1+a2+a3>=150 && b1+b2+b3<150) || (a1+a2+a3<150 && b1+b2+b3>=150) ){
        wc = a1+a2+a3+b1+b2+b3+d+c;
        wnc = a1+a2+a3+b1+b2+b3+d+d;
        if(wc<wnc){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    
    else{
        wc = a1+a2+a3+b1+b2+b3+d+d+c;
        wnc = a1+a2+a3+b1+b2+b3+d+d;
        if(wc<wnc){
            printf("YES");
        }
        
        else{
            printf("NO");
        }
    }
}