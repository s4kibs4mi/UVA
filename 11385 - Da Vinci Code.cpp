#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<algorithm>

#define N 45

using namespace std;

long long int ar[N];

void gen_fib(void){
	int c = 0;
	long long int a=1,b=2,d;
	while(c<N){
		ar[c] = a;
		d = a+b;
		a = b;
		b = d;
		c++;
	}
}

int fibCheck(long long int n){
	int i;
	for(i=0;i<N;i++){
		if(ar[i]==n)
			break;
	}
	return i;
}

int main(){
	char input[101],output[101];
	int t,n,i,j,a[N],k,pos,max_pos;
	gen_fib();
	scanf("%d",&t);
	getchar();
	for(i=0;i<t;i++){
		max_pos=-1;
		memset(output,' ',sizeof(output));
		scanf("%d",&n);
		getchar();
		for(j=0;j<n;j++) scanf("%d",&a[j]);
		getchar();
		gets(input);
		j=0;
		k=0;
		while(input[j]!='\0' && k<n){
			if(input[j]>='A' && input[j]<='Z'){
				pos = fibCheck(a[k]);
				if(pos>max_pos) max_pos = pos;
				output[pos] = input[j];
				k++;
			}
			j++;
		}
		output[max_pos+1] = '\0';
		for(j=0;output[j]!='\0';j++) printf("%c",output[j]);
		printf("\n");
	}
	return 0;
}
