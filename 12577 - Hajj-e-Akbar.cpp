#include<iostream>
#include<set>
#include<string>
#include<cstdio>

using namespace std;

int main(){
	int i;
	string a;
	i = 1;
	while(cin >> a){
		if(a=="*") break;
		if(a=="Hajj")
			cout << "Case " << i << ": Hajj-e-Akbar" << endl;
		else cout << "Case " << i << ": Hajj-e-Asghar" << endl;
		i++;
	}
	return 0;
}
