#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main(){
	int a[3],t,i,j;
	scanf("%d",&t);
	i = 0;
	while(i++<t){
		for(j=0;j<3;j++) scanf("%d",&a[j]);
		sort(a,a+3);
		printf("Case %d: %d\n",i,a[1]);
	}
	return 0;
}
