#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>

using namespace std;

int main(){
	char f[1000],l[1000];
	char s;
	long double x,y,sample = 2147483647;
	while(cin >> f >> s >> l){
		cout << f << " " << s << " " << l << endl;
		x = atof(f);
		y = atof(l);
		if(x > sample)
			cout << "first number too big" << endl;
		if(y > sample)
			cout << "second number too big" << endl;
		if(s == '+' && (x+y) > sample)
			cout << "result too big" << endl;
		if(s == '*' && (x*y) > sample)
			cout << "result too big" << endl;
	}
	return 0;
}
