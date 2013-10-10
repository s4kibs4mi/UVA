#include<stdio.h>
#include<stdlib.h>
#include<string.h>

bool IsPalindrome(char input[]){
	int n = strlen(input),i=0;
	while(i<=n/2){
		if(input[i]!=input[n-i-1]) return false;
		i++;
	}
	return true;
}
bool IsMirror(char input[]){
	char rev_str[21];
	int n = strlen(input),i = n-1,j=0,flag = 0;
	while(i>=0){
		if(input[i]=='E')
			rev_str[j] = '3';
		else if(input[i]=='J')
			rev_str[j] = 'L';
		else if(input[i]=='L')
			rev_str[j] = 'J';
		else if(input[i]=='S')
			rev_str[j] = '2';
		else if(input[i]=='Z')
			rev_str[j] = '5';
		else if(input[i]=='2')
			rev_str[j] = 'S';
		else if(input[i]=='3')
			rev_str[j] = 'E';
		else if(input[i]=='5')
			rev_str[j] = 'Z';
		else rev_str[j] = input[i];
		i--;
		j++;
	}
	rev_str[j] = '\0';
	if(n%2!=0){
		j = (n/2);
		if(input[j]=='A' || input[j]=='H' || input[j]=='I' || input[j]=='M' || input[j]=='O' || input[j]=='T' || input[j]=='U' || input[j]=='V' || input[j]=='W' || input[j]=='X' || input[j]=='Y' || input[j]=='1' || input[j]=='8'){
			flag = 1;
		}
	}
	if(n%2==0) flag = 1;
	if(strcmp(input,rev_str)==0 && flag) return true;
	else return false;
}
bool IsMirrorChar(char input[]){
	int j,n = strlen(input);
	for(j=0;j<n;j++){
		if(input[j]!='A' && input[j]!='E' && input[j]!='H' && input[j]!='I' && input[j]!='J' && input[j]!='L' && input[j]!='M' && input[j]!='O' && input[j]!='S' && input[j]!='T' && input[j]!='U' && input[j]!='V' && input[j]!='W' && input[j]!='X' && input[j]!='Y' && input[j]!='1' && input[j]!='2' && input[j]!='3' && input[j]!='5' && input[j]!='8')
		return false;
	}
	return true;
}
int main(){
	char a[1000];
	while(gets(a)){
		if(IsMirror(a) && IsPalindrome(a) && IsMirrorChar(a))
			printf("%s -- is a mirrored palindrome.\n\n",a);
		else if(IsPalindrome(a))
			printf("%s -- is a regular palindrome.\n\n",a);
		else if(IsMirror(a) && IsMirrorChar(a))
			printf("%s -- is a mirrored string.\n\n",a);
		else
			printf("%s -- is not a palindrome.\n\n",a);
	}
	return 0;
}
