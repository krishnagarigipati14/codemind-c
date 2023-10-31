#include <stdio.h>
#include<math.h>
int main(){
    int l,b,w,c;
    scanf("%d%d%d%d", &l, &b, &w, &c);
    
    
        int sq = 4*w*w;
        int br = 2*(b*w);
        int sr = 2*(l*w);
        
        int ta = sq + br+sr;
        
        int tc = ta*c;
        
        printf("%d", abs(tc));
    
}