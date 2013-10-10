#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10];
	int i,j,n,m,numb,digit;
	for(i=0;i<10;i++) a[i]=0;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		int c = 0;
		for(i=n;i<=m;i++)
		{
			numb = i;
			bool flag = true;
			while(numb>0)
			{
				digit = numb%10;
				a[digit]++;
				numb/=10;
			}
			for(j=0;j<10;j++)
			{
				if(a[j]>=2) {
					flag=false;
					break;
				}
			}
			if(flag)
				c++;
			for(j=0;j<10;j++) a[j]=0;
		}
		printf("%d\n",c);
	}
	return 0;
}
