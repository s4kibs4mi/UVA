#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,x,y;
	while(scanf("%d %d",&a,&b)==2){
		if(a==-1 && b==-1) break;
		x = abs(a-b);
		if(b>a) y = abs((100+a)-b);
		else y = abs(a-(100+b));
		if(x<y) printf("%d\n",x);
		else printf("%d\n",y);
	}
	return 0;
}
