#include<stdio.h>
#include<stdlib.h>

int main(){
	int a;
	while(scanf("%d", &a) != EOF){
		if(a%400==0){
			printf("閏年");
		}
		else if(a%100==0){
			printf("平年");
		}
		else if(a%4==0){
			printf("閏年");
		}
	}
	return 0;
}
