#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

bool IsSquare(int n){
	int sq = sqrt(n);
	if(sq*sq == n) return true;
	return false;
}

void DigitalFortress(char text[],char out[]){
	int i,j,k = 0,n = sqrt(strlen(text)),x = strlen(text);
	for(i=0;i<=n;i++){
		for(j=i;j<x;j+=n){
			out[k++] = text[j];
		}
	}
	out[x] = '\0';
}

int main(){
	char text[20000],out[20000];
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		gets(text);
		if(IsSquare(strlen(text))){
			DigitalFortress(text,out);
			puts(out);
			memset(out,'\0',sizeof(out));
		}
		else
			printf("INVALID\n");
	}
	return 0;
}
