#include <stdio.h>
int main(){
    int l,b,w,c;
    scanf("%d%d%d%d", &l, &b, &w, &c);
    
    if(2*w<b && 2*w<l){
        int sq = 4*w*w;
        int br = 2*((b-2*w)*w);
        int sr = 2*((l-2*w)*w);
        
        int ta = sq+br+sr;
        
        int tc = ta*c;
        
        printf("%d", tc);
    }
    
    else{
        printf("Impossible");
    }
}