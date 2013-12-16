#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>

using namespace std;

int main(){
	int t,n,count = 0;
	string x;
	cin >> t;
	getchar();
	while(t--){
		cin >> x;
		if(x == "donate"){
			cin >> n;
			getchar();
			count += n;
			continue;
		}
		cout << count << endl;
	}
	return 0;
}
