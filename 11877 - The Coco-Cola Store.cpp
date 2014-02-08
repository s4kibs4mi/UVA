#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>

using namespace std;

int Cola(int n,int d){
	int h;
	if(n <= 1) return d;
	if(n==2) n++;
	d += n/3;
	return Cola((n/3)+(n%3),d);
}

int main(){
	int n;
	while(scanf("%d",&n)==1){
		if(n==0) break;
		printf("%d\n",Cola(n,0));
	}
	return 0;
}
