#include <stdio.h>
int main(){
	int a,b=1;
	int d = 0;
	scanf("%d", &a);
	
	while(a>0){
		int c = a%10;
		b = b*c;
		d = d+c;
		a = a/10;
	}
	
	printf("%d", b-d);
}