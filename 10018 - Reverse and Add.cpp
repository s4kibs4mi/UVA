#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<string.h>
#include<set>
#include<cctype>

using namespace std;

long long int RevNumb(long long int x){
	long long int v = 0;
	while(x > 0){
		v = (x%10) + (v*10);
		x/=10;
	}
	return v;
}

int main(){
	long long int t,n,i,sum;
	string x;
	cin >> t;
	i = 0;
	while(i<t){
		cin >> n;
		long long int times = 0;
		while(1){
			times++;
			sum = n + RevNumb(n);
			n = sum;
			sum = RevNumb(sum);
			if(sum==n) break;
		}
		cout << times << " " << n << endl;
		i++;
	}
	return 0;
}
