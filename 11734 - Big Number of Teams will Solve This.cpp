#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

string Marge(string x){
    string y;
    for(int i = 0;x[i]; i++){
        if(x[i] != ' ')
            y.push_back(x[i]);
    }
    return y;
}

int main(){
    string a , b;
    long test , i;
    cin >> test;
    getchar();
    for(i = 1; i <= test; i++){
        getline(cin , a);
        getline(cin , b);
        if(a == b)
            cout << "Case " << i << ": Yes\n";
        else{
            a = Marge(a);
            b = Marge(b);
            if(a == b)
                cout << "Case " << i << ": Output Format Error\n";
            else cout << "Case " << i << ": Wrong Answer\n";
        }
    }

    return 0;
}
