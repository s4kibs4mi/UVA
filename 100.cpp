#include<stdio.h>
#include<stdlib.h>

int counting(long long int n)
{
	int count = 1;
	while(n>1)
	{
		if(n%2!=0)
			n = (3*n)+1;
		else
			n = n/2;
		count++;
	}
	return count;
}
int main()
{
	long long int i,j,count,x,y,max;
	while(scanf("%lld %lld",&i,&j)==2)
	{
		if(i>j) {
			x = j;
			y = i;
		}
		else {
			x = i;
			y = j;
		}
		max = 1;
		for(;x<=y;x++) {
			count = counting(x);
			if(count>max)
				max = count;
		}
		printf("%lld %lld %lld\n",i,j,max);
		
	}
	return 0;
}
