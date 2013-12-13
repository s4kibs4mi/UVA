#include<iostream>

using namespace std;

int main(){
	int n,c,i,j=1;
	while(cin >> n){
		if(n < 0) break;
		c = 0;
		i = 1;
		while(i<n){
			i+=i;
			c++;
		}
		cout << "Case " << j << ": " << c << endl;
		j++;
	}
	return 0;
}
