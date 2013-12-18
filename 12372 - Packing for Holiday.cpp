#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<map>
#include<cctype>

using namespace std;

int main(){
	int l,w,h,i,t;
	i = 1;
	cin >> t;
	getchar();
	while(i <= t){
		cin >> l >> w >> h;
		getchar();
		if(l < 21 && w < 21 && h < 21)
			cout << "Case " << i << ": good" << endl;
		else cout << "Case " << i << ": bad" << endl;
		i++;
	}
	return 0;
}
