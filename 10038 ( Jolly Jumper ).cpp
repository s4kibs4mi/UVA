#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main(){
	int n,a[3001],b[3001];
	while(scanf("%d",&n)==1){
		int i=0;
		bool flag = true;
		while(i<n){
			scanf("%d",&a[i]);
			i++;
		}
		for(i=0;i<n-1;i++){
			b[i] = abs(a[i]-a[i+1]);
		}
		sort(b,b+i);
		for(i=0;i<n-1;i++){
			if(b[i]==b[i+1]){
				flag = false;
				break;
			}
		}
		if(flag) printf("Jolly\n");
		else printf("Not jolly\n");
	}
	return 0;
}
