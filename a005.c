#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int b, c, d, e, f;
	for(int i=1; i<=a; i++){
		scanf("%d %d %d %d", &b, &c, &d, &e);
		f = c/b;
		printf("%d %d %d %d %d", b, c, d, e, e*f);
	}
}
