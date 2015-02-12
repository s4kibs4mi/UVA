#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <list>

using namespace std;

int main(){
    map<int,string> mp;
    mp[0] = " ";
    mp[1] = ".,?\"";
    mp[2] = "abc";
    mp[3] = "def";
    mp[4] = "ghi";
    mp[5] = "jkl";
    mp[6] = "mno";
    mp[7] = "pqrs";
    mp[8] = "tuv";
    mp[9] = "wxyz";

    int test, l;

    cin >> test;
    while(test--){
        cin >> l;
        int x[l], y[l];
        for(int i = 0; i < l; i++)
            scanf("%d",&x[i]);

        for(int i = 0; i < l; i++)
            scanf("%d",&y[i]);

        string str;
        for(int i = 0; i < l; i++){
            string temp = mp[x[i]];
            str += temp[y[i]-1];
        }
        cout << str << endl;
    }
    return 0;
}
