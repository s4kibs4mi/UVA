#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int t,i,a,b;
	scanf("%d",&t);
	i = 0;
	while(i<t){
		scanf("%d %d",&a,&b);
		if(a<b) printf("<\n");
		else if(a>b) printf(">\n");
		else printf("=\n");
		i++;
	}
	return 0;
}
