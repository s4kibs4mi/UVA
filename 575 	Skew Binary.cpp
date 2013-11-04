#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int Binary(char n[]){
	int sum = 0,i,nCount = strlen(n);
	i = 0;
	while(n[i]){
		sum+=(n[i]-'0')*(pow(2,nCount--)-1);
		i++;
	}
	return sum;
}

int main(){
	char n[500];
	while(gets(n)){
		if(strcmp(n,"0")==0) break;
		printf("%d\n",Binary(n));
	}
	return 0;
}
