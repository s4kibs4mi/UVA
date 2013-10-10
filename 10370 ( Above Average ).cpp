#include<stdio.h>
#include<stdlib.h>
int main(){
	int c,i,j,n;
	scanf("%d",&c);
	for(i=0;i<c;i++){
		scanf("%d",&n);
		float x[n],sum=0,count=0;
		for(j=0;j<n;j++){
			scanf("%f",&x[j]);
			sum+=x[j];
		}
		int avg = sum/n;
		for(j=0;j<n;j++){
			if(x[j]>avg) count++;
		}
		float res = (100*count)/n;
		printf("%.3f%%\n",res);
		
	}
	return 0;
}
