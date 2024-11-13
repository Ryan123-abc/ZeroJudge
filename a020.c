#include<stdio.h>

int main(){
	char a, b[9];
	int c = 0, sum;
	scanf("%c%s", &a, b);
	switch(a){
		case 'A': c=10; break;
		case 'B': c=11; break;
		case 'C': c=12; break;
		case 'D': c=13; break;
		case 'E': c=14; break;
		case 'F': c=15; break;
		case 'G': c=16; break;
		case 'H': c=17; break;
		case 'I': c=34; break;
		case 'J': c=18; break;
		case 'K': c=19; break;
		case 'L': c=20; break;
		case 'M': c=21; break;
		case 'N': c=22; break;
		case 'O': c=35; break;
		case 'P': c=23; break;
		case 'Q': c=24; break;
		case 'R': c=25; break;
		case 'S': c=26; break;
		case 'T': c=27; break;
		case 'U': c=28; break;
		case 'V': c=29; break;
		case 'W': c=32; break;
		case 'X': c=30; break;
		case 'Y': c=31; break;
		case 'Z': c=33; break;
	}
	sum=(c%10)*9+(c/10);
	for(int i = 0; i<8; i++) 
		sum += (b[i]-48)*(8-i);
	sum += b[8]-48;	
	if(sum%10==0) printf("real");
	else printf("fake");
	return 0;
}
