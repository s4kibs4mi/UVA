#include<stdio.h>
#include<stdlib.h>
int main(){
	char str[1000],str2[1000];
	int i,j;
	bool ch = true;
	while(gets(str)){
		j=0;
		for(i=0;str[i]!='\0';i++){
			if(str[i]=='"' && ch){
				str2[j++] = '`';
				str2[j++] = '`';
				ch = false;
			}
			else if(str[i]=='"' && !ch){
				str2[j++] = '\'';
				str2[j++] = '\'';
				ch = true;
			}
			else str2[j++] = str[i];
		}
		str2[j] = '\0';
		puts(str2);
	}
	return 0;
}
