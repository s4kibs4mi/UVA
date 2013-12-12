#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<cstdio>
#include<cctype>

using namespace std;

int main(){
	map <string , int> in;
	map <string , int> :: iterator it;
	string x;
	int t;
	cin >> t;
	getchar();
	while(t--){
		getline(cin , x);
		x.assign(x,0,x.find(" "));
		in[x]++;
	}
	it = in.begin();
	while(it != in.end()){
		cout << it->first << " " << it->second << endl;
		it++;
	}
	return 0;
}
