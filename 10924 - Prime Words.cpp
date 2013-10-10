#include<stdio.h>
#include<stdlib.h>
#include<math.h>

bool IsPrime(int n){
	int sq = sqrt(n);
	for(int i=2;i<=sq;i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	char word[22];
	int sum;
	while(gets(word)){
		sum = 0;
		for(int i=0;word[i]!='\0';i++){
			if(word[i]>='A' && word[i]<='Z') sum+=word[i]%64+26;
			else if(word[i]>='a' && word[i]<='z') sum+=(word[i]%96);
		}
		if(IsPrime(sum))
			printf("It is a prime word.\n");
		else printf("It is not a prime word.\n");
	}
	return 0;
}
