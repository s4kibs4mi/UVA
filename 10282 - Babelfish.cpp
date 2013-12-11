#include <iostream>
#include <cstdio>
#include <map>
#include <string>

using namespace std;

int main()
{

    map <string , string> mp;
    string a,b;
    while(getline(cin , a)){
		if(a.length()==0) break;
		b.assign(a,0,a.find(" "));
		a.erase(0,a.find(" ")+1);
        mp[a] = b;
    }

    while(getline(cin , a)){
	if(a.length()==0) break;
        if(mp.find(a)!=mp.end())
            cout << mp[a] << endl;
        else cout << "eh" << endl;
    }
    return 0;
}
