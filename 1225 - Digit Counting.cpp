#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

void CountGen(int n,int c[]){
	while(n > 0){
		c[n%10]++;
		n /= 10;
	}
}

int main(){
	int count[10],i,n,t;
	bool check;
	cin >> t;
	while(t--){
		memset(count,0,sizeof(count));
		cin >> n;
		i = 1;
		while(i <= n){
			if(i > 9)
				CountGen(i,count);
			else count[i]++;
			i++;
		}
		check = false;
		for(i=0 ; i <= 9 ; i++){
			if(check)
				cout << " ";
			check = true;
			cout << count[i];
		}
		cout << endl;
	}
	return 0;
}
