#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<cstdio>

using namespace std;

int main(){
	vector <long long int> temp;
	int t,l,w,h,max;
	while(cin >> t){
		if(t==0) break;
		max = 0;
		while(t--){
			cin >> l >> w >> h;
			if(h >= max){
				if(h > max) temp.clear();
				max = h;
				temp.push_back(l*w*h);
			}			
		}
		sort(temp.begin(),temp.end());
		cout << temp.back() << endl;
		temp.clear();
	}
	return 0;
}
