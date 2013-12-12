#include<cstdio>
#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
	int t,n;
	string in,in2;
	map <string , string> out;
	map <string , string> :: iterator it;
	cin >> t;
	getchar();
	while(t--){
		getline(cin , in);
		getline(cin , in2);
		out[in] = in2;
	}
	cin >> n;
	getchar();
	while(n--){
		getline(cin , in);
		it = out.begin();
		while(it!=out.end()){
			if(it->first==in){
				cout << it->second << endl;
				break;
			}
			else if(it->second==in){
				cout << it->first << endl;
				break;
			}
			it++;
		}
	}
	return 0;
}
