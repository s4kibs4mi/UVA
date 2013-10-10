#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	int a[26],n,i,j,h,k,index,max;
	char word[1000];
	scanf("%d",&n);
	getchar();
	for(j=0;j<26;j++) a[j]=0;
	i=0;
	while(i<n)
	{
		gets(word);
		j=0;
		while(word[j]!='\0')
		{
			word[j]=tolower(word[j]);
			h = (word[j]-(65+32));
			//printf("%d\t",h);
			a[h]++;
			j++;
		}
		i++;
	}
	for(k=0;k<26;k++) {
		max=0;
		for(j=0;j<26;j++) {
			if(a[j]>max) {
				max = a[j];
				index = j;
			}
		}
		if(a[k]) {
			printf("%c %d\n",index+65,max);
			a[index]=-1;
		}
	}
	return 0;
}
