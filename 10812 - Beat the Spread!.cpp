#include<iostream>
#include<string>
#include<set>
#include<algorithm>
#include<string.h>
#include<cmath>
#include<vector>

using namespace std;

void Max(int *a,int *b){
	if(*a < *b){
		int h = *a;
		*a = *b;
		*b = h;
	}
}

int main(){
	int t,i,j,a,b,x,y;
	cin >> t;
	while(t--){
		x = -1;
		y = -1;
		cin >> a >> b;
		for(i=0;i<=a;i++){
			for(j=0;j<=a;j++){
				if(i+j==a && abs(i-j)==b){
					x = i;
					y = j;
				}
			}
		}
		Max(&x,&y);
		if(x==-1 && y==-1)
			cout <<"impossible\n";
		else cout << x << " " << y << "\n";
	}
	return 0;
}
