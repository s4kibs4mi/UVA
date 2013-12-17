#include<iostream>
#include<set>
#include<string>
#include<cstdio>

using namespace std;

int main(){
	int t,a,b,c,i = 1;
	while(cin >> t){
		if(t==0) break;
		b = 0;
		c = 0;
		while(t--){
			cin >> a;
			getchar();
			if(a >=1 && a < 100) b++;
			else c++;
		}
		cout << "Case " << i << ": " << b-c << endl;
		i++;
	}
	return 0;
}
