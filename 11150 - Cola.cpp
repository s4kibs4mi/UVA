#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>

using namespace std;

int Gen(int x,int count){
	if(x < 2) return count;
	if(x == 2) x++;
	return Gen((x%3)+(x/3),count+x/3);
}

int main(){
	int n;
	while(scanf("%d",&n)==1){
		cout << Gen(n,n) << endl;
	}
	return 0;
}
