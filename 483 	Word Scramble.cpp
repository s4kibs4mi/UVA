#include<stdio.h>
#include<string.h>
void Reverse(char str[],char str1[]){
	int i,n = strlen(str);
	for(i=0;i<n;i++) str1[i] = str[n-i-1];
	str1[i] = '\0';
}

int main(){
	char str[1000],*patch,rev[1000];
	bool check;
	while(gets(str)){
		check = false;
		patch = strtok(str," ");
		while(patch!=NULL){
			Reverse(patch,rev);
			if(check) printf(" ");
			check = true;
			printf("%s",rev);
			patch = strtok(NULL," ");
		}
		printf("\n");
	}
	return 0;
}
