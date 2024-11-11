#include<stdio.h>
#include<string.h>

int main(){
	char a[1024];
	scanf("%s", a);
	for(int i = 0; i < strlen(a); i++){
		a[i] = a[i]-7;
	}
	printf("%s", a);
	return 0;
}
