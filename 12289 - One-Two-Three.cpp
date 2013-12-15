#include<string>
#include<iostream>
#include<cstdio>

using namespace std;

int NCheck(string a){
	if(a.length() > 3) return 3;
	int i = 0,o = 0,t = 0;
	while(a[i]){
		if(a[i]=='o'){
			o++;
			t++;
			a[i] = '0';
		}
		else if(a[i]=='n'){
			o++;
			a[i] = '0';
		}
		else if(a[i]=='e'){
			o++;
			a[i] = '0';
		}
		else if(a[i]=='t'){
			t++;
			a[i] = '0';
		}
		else if(a[i]=='w'){
			t++;
			a[i] = '0';
		}
		i++;
	}
	if(t > o) return 2;
	return 1;
}

int main(){
	string a;
	int t;
	cin >> t;
	getchar();
	while(t--){
		cin >> a;
		cout << NCheck(a) << endl;
	}
	return 0;
}
