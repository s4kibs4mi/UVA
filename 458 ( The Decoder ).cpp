#include<stdio.h>
#include<stdlib.h>
int main(){
	char text[1000];
	int i;
	while(gets(text)){
		i=0;
		while(text[i]!='\0'){
			text[i]-= 7;
			i++;
		}
		puts(text);
	}
	return 0;
}
