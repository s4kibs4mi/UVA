#include<iostream>
#include<set>
#include<string>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	long int t,a,b,c;
	cin >> t;
	getchar();
	while(t--){
		cin >> a >> b >> c;
		if((a*a) + (b*b) >= (c*c)) cout << "OK" << endl;
		else cout << "Wrong!!" << endl;
	}
	return 0;
}
