#include<iostream>
#include<cstdio>

using namespace std;

int Recycle(int a, int c,int n){
	if(a >= c){
		n += a/c;
		a = (a%c) + (a/c);
		return Recycle(a,c,n);
	}
	return n;
}

int main(){
	int a,b,c,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&a,&b,&c);
		cout << Recycle(a+b,c,0) << endl;
	}
	return 0;
}
