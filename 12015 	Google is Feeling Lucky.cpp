#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>

#define N 10
using namespace std;

int main(){
	//freopen("input.txt","r",stdin);
	int i,n,k,l,value[N],j,h,max,prevMax,backup[N];
	char output[2000],input[2000],*url;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		for(j=0;j<N;j++){
			scanf("%s %d",input,&value[j]);
			strcat(output,strcat(input," "));
		}
		l = 0;
		for(k=0;k<N;k++){
			max = value[0];
			h = 0;
			for(j=1;j<N;j++){
				if(value[j]>=max){
					max = value[j];
					h = j;
				}
			}
			value[h] = 0;
			if(k==0) prevMax = max;
			if(prevMax == max) backup[l++] = h;
		}
		sort(backup,backup+l);
		url = strtok(output," ");
		j = 0;
		l = 0;
		printf("Case #%d:\n",i+1);
		while(url!=NULL){
			if(j==backup[l]) { printf("%s\n",url); l++; };
			url = strtok(NULL," ");
			j++;
		}
		memset(backup,'\0',sizeof(backup));
		memset(output,'\0',sizeof(output));
		memset(output,'\0',sizeof(input));
	}
	return 0;
}
