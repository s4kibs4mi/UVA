#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<string>
#include<vector>

using namespace std;

int Marge(int n){
	while(n%16!=0) n++;
	return n;
}

int main(){
	vector< string > name;
	vector< string > word;
	word.push_back("Happy");
	word.push_back("birthday");
	word.push_back("to");
	word.push_back("you");
	word.push_back("Rujia");
	string temp;
	int i,n,x;
	cin >> n;
	i = 0;
	while(i < n){
		cin >> temp;
		name.push_back(temp);
		i++;
	}
	x = Marge(n);
	i = 0;
	int r = 0;
	while(i < x){
		if(i%4==3 && i != 0) r++;
		if(r == 3) { cout << name[i%n] << ": " << word[4] << endl; r = -1; }
		else cout << name[i%n] << ": " << word[i%4] << endl;
		i++;
	}
	return 0;
}
