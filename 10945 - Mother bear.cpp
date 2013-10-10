#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

bool palindrome(char str[]){
	int len = strlen(str),i,len_h = len/2;
	for(i=0;i<=len_h;i++){
		if(str[i]!=str[len-1-i])
			return false;
	}
	return true;
}

int main(){
	char str[1000],str2[1000];
	int i,j;
	while(1){
		gets(str);
		if(strcmp(str,"DONE")==0) break;
		i=0;
		j=0;
		while(str[i]!='\0'){
			if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
				str2[j++] = tolower(str[i]);
			i++;
		}
		str2[j] = '\0';
		if(palindrome(str2)) printf("You won't be eaten!\n");
		else printf("Uh oh..\n");
	}
	return 0;
}
