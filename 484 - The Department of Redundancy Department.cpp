#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<cstdio>

using namespace std;

int main(){
	vector <long long> temp;
	vector <long long> :: iterator it;
	map <long long , long long > in;
	long long a;
	
	while(scanf("%lld",&a)==1){
		in[a]++;
		if(find(temp.begin(),temp.end(),a)==temp.end())
			temp.push_back(a);
	}
	
	while(!temp.empty()){
		a = temp.front();
		temp.erase(temp.begin());
		cout << a << " " << in[a] << endl;
	}
	return 0;
}
