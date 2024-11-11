#include<stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if( (a*2+b)%3 == 0 ){
		printf("普通");
	}
	else if( (a*2+b)%3 == 1 ){
		printf("吉");
	}
	else{
		printf("大吉");
	}
}
	
