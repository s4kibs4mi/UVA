#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<string.h>
#include<set>
#include<cctype>
#include<cmath>

using namespace std;

int main(){
	string in;
	int f[55],i;
	while(getline(cin , in)){
		memset(f,0,sizeof(f));
		for(i=0;in[i];i++){
			if(in[i] >= 'a' && in[i] <= 'z'){
				f[in[i]-'a']++;
			}
			else if(in[i] >= 'A' && in[i] <= 'Z')
				f[26+in[i]-'A']++;
		}
		int max = 0;
		for(i=0;i<55;i++){
			if(f[i] > max){
				max = f[i];
			}
		}
		for(i=26;i<55;i++){
			if(f[i]==max)
				printf("%c",'A'+i-26);
		}
		for(i=0;i<25;i++){
			if(f[i]==max)
				printf("%c",i+'a');
		}
		printf(" %d\n",max);
	}
	return 0;
}
