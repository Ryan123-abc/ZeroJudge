#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	for(int i = 2; i <= a; i++){
		if(a%i == 0){
			int power = 0;
			while(a%i == 0){
				a /= i;
				power++;
			}

			if(power == 1)
				printf("%d", i);
			else
				printf("%d^%d", i, power);

			if(a > 1)
				printf(" * ");
		}
	}
	return 0;
}



