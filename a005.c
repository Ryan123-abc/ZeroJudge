#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	for(int i=0; i<a; i++){
		int b[4];
		scanf("%d %d %d %d", &b[0], &b[1], &b[2], &b[3]);
		if(b[1]-b[0]==b[2]-b[1])
			printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[3]+(b[1]-b[0]));
		else
			printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[3]*(b[1]-b[0]));
		
	}
	return 0;
}
