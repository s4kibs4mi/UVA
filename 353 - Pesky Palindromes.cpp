#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<string.h>
#include<set>
#include<cctype>

using namespace std;

bool IsPalindrome(string x){
	int n = x.length(),xh;
	xh = n/2; 
	for(int i=0,j = n-1;i<=xh;i++,j--){
		if(x[i]!=x[j]) return false;
	}
	return true;
}

int main(){
	string input,temp;
	set <string> output;
	set<string> :: iterator out;
	int n,l,j,i;
	while(getline(cin , input)){
		l = input.length();
		for(i=0;i < l;i++){
			for(j=1;j <= l;j++){
				temp = input.substr(i,j);
				output.insert(temp);
			}
		}
		n = 0;
		while(!output.empty()){
			out = output.begin();
			if(IsPalindrome(*out)) n++;
			output.erase(output.begin());
		}
		
		cout << "The string '" << input << "' contains " << n << " palindromes.\n";
	}
	return 0;
}
