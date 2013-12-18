#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<algorithm>

using namespace std;

int F(long int x){
	long int sum = 0;
	if(x > 9){
		while(x > 0){
			sum += x%10;
			x /= 10;
		}
		return F(sum);
	}
	return x;
}

int main(){
	long int n;
	while(cin >> n){
		if(n==0) break;
		cout << F(n) << endl;
	}
	return 0;
}
