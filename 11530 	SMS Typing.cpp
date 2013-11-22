#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Lcount(char str[]){
	int sum = 0,i;
	for(i=0;str[i];i++){
		if(str[i]==' ') sum++;
		else if(str[i]>='a' && str[i]<='c')
			sum+=1+(str[i]-'a');
		else if(str[i]>='d' && str[i]<='f')
			sum+=1+(str[i]-'d');
		else if(str[i]>='g' && str[i]<='i')
			sum+=1+(str[i]-'g');
		else if(str[i]>='j' && str[i]<='l')
			sum+=1+(str[i]-'j');
		else if(str[i]>='m' && str[i]<='o')
			sum+=1+(str[i]-'m');
		else if(str[i]>='t' && str[i]<='v')
			sum+=1+(str[i]-'t');
		else if(str[i]>='p' && str[i]<='s')
			sum+=1+(str[i]-'p');
		else if(str[i]>='w' && str[i]<='z')
			sum+=1+(str[i]-'w');
	}
	return sum;
}

int main(){
	int t;
	char text[1000];
	scanf("%d",&t);
	getchar();
	for(int i=0;i<t;i++){
		gets(text);
		printf("Case #%d: %d\n",i+1,Lcount(text));
	}
	return 0;
}
