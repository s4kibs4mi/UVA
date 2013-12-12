#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<cstdio>
#include<cctype>

using namespace std;

int main(){
	map <char , int> in;
	map <char , int> :: iterator it;
	string x;
	int t,i,max;
	cin >> t;
	getchar();
	while(t--){
		getline(cin , x);
		i = 0;
		while(x[i]){
			x[i] = tolower(x[i]);
			if(x[i] >= 'a' && x[i] <= 'z')
				in[x[i]]++;
			i++;
		}
		max = 0;
		it = in.begin();
		while(it != in.end()){
			if((it->second) > max) max = it->second;
			it++;
		}
		it = in.begin();
		while(it != in.end()){
			if((it->second) == max)
				cout << it->first;
			it++;
		}
		cout << endl;
		in.clear();
	}
	return 0;
}
