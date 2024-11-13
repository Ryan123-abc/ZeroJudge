#include<stdio.h>

int main(){
	char a, b[9];
	int c, sum;
	scanf("%c%s", &a, b);
	switch(a){
		case 'A': c=10;
		case 'B': c=11;
		case 'c': c=12;
		case 'D': c=13;
		case 'E': c=14;
		case 'F': c=15;
		case 'G': c=16;
		case 'H': c=17;
		case 'I': c=34;
		case 'J': c=18;
		case 'K': c=19;
		case 'L': c=20;
		case 'M': c=21;
		case 'N': c=22;
		case 'O': c=35;
		case 'P': c=23;
		case 'Q': c=24;
		case 'R': c=25;
		case 'S': c=26;
		case 'T': c=27;
		case 'U': c=28;
		case 'V': c=29;
		case 'W': c=32;
		case 'X': c=30;
		case 'Y': c=31;
		case 'Z': c=33;
	}
	sum=(c%10)*9+(c/10);
	for(int i = 0; i<8; i++) 
		sum += (b[i]-48)*(8-i);
	sum += b[8]-48;	
	if(sum%10==0) printf("real");
	else printf("fake");
	return 0;
}
