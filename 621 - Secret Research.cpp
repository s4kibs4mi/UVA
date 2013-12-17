#include<iostream>
#include<set>
#include<string>
#include<cstdio>

using namespace std;

int main(){
	int t,len;
	string a;
	cin >> t;
	getchar();
	while(t--){
		cin >> a;
		len = a.length();
		if(a[len-1]=='5' && a[len-2]=='3')
			cout << "-" << endl;
		else if(a[0]=='9' && a[len-1]=='4')
			cout << "*" << endl;
		else if(len > 3 && a[0]=='1' && a[1]=='9' && a[2]=='0')
			cout << "?" << endl;
		else cout << "+" << endl;
	}
	return 0;
}
