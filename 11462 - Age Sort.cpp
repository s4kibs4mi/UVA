#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main(){
	int n,a[2000000];
	while(scanf("%d",&n)==1){
		if(n==0) break;
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		sort(a,a+n);
		bool b = false;
		for(int i=0;i<n;i++){
			if(b) printf(" ");
			printf("%d",a[i]);
			b = true;
		}
		printf("\n");
	}
	return 0;
}
