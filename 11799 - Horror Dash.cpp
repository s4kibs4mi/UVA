#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main(){
	int t,i,j,n;
	scanf("%d",&t);
	i = 0;
	while(i++<t){
		scanf("%d",&n);
		int a[n];
		for(j=0;j<n;j++) scanf("%d",&a[j]);
		sort(a,a+n);
		printf("Case %d: %d\n",i,a[n-1]);
	}
	return 0;
}
