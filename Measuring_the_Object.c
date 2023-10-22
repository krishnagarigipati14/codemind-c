#include <stdio.h>
int main(){
    int w,x,y,z;
    scanf("%d%d%d%d", &w, &x, &y, &z);
    
    int a = x+y;
    int b = y+z;
    int c = z+x;
    int d = x+y+z;
    
    if(a==w || b==w|| c==w|| d==w || x==w || y==w || z==w){
        printf("YES");
    }
    
    else{
        printf("NO");
    }
}