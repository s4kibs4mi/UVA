#include <iostream>
#include <cstdio>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main(){
    string a;
    long test;
    cin >> test;
    getchar();
    while(test--){
        getline(cin , a);
        sort(a.begin(),a.end());
        set <string> s;
        set <string> :: iterator it;
        do{
            s.insert(a);
        }while(next_permutation(a.begin(),a.end()));
        it = s.begin();
        while(it != s.end()){
            cout << *it << "\n";
            it++;
        }
        cout << "\n";
    }

    return 0;
}
