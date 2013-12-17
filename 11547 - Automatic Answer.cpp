#include<iostream>
#include<set>
#include<string>
#include<cstdio>
#include<cstdlib>

using namespace std;

long int Make(int n){
	n *= 567;
	n /= 9;
	n += 7492;
	n *= 235;
	n /= 47;
	n -= 498;
	n /= 10;
	n %= 10;
	return abs(n);
}

int main(){
	long int t,n;
	cin >> t;
	getchar();
	while(t--){
		cin >> n;
		getchar();
		cout << Make(n) << endl;
	}
	return 0;
}
