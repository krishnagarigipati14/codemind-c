 #include <stdio.h>
 int main(){
     int n,x;
     
     scanf("%d %d", &n, &x);
     
     int sum = (x*(x+1))/2;
     
     if(sum>n || n<x){
         printf("NO");
     }
     
     else{
         printf("YES");
     }
 }