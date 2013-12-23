#include<iostream>

using namespace std;

int main(){
	int i,t,temp,in,n,l,h;
	bool check;
	cin >> t;
	i = 1;
	while( i <= t){
		cin >> n;
		h = 0;
		l = 0;
		check = false;
		while(n--){
			cin >> in;
			if(check){
				if(in > temp)
					h++;
				else if(in < temp)
					l++;
			}
			check = true;
			temp = in;
		}
		cout << "Case " << i << ": " << h << " " << l << endl;
		i++;
	}
	return 0;
}
