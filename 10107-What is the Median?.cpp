#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int n;
	vector <int> a;
	while(scanf("%d",&n)==1){
		a.push_back(n);
		sort(a.begin(),a.begin()+a.size());
		if(a.size()%2!=0) printf("%d\n",a[a.size()/2]);
		else printf("%d\n",((a[(a.size()/2)-1])+(a[a.size()/2]))/2);
	}
	return 0;
}
