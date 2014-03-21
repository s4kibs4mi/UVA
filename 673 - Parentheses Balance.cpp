#include <iostream>
#include <cstdio>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <cctype>
#include <stack>

using namespace std;

int main(){
    long n;
    string x;
    cin >> n;
    getchar();
    while(n--){
        getline(cin , x);
        stack <char> y;
        bool check = false;
        for(int i = 0; x[i]; i++){
            if(x[i] == '(' || x[i] == '[')
                y.push(x[i]);
            else if(x[i] == ')' || x[i] == ']'){
                if(!y.empty() && x[i] == ')' && y.top() == '(')
                    y.pop();
                else if(!y.empty() && x[i] == ']' && y.top() == '[')
                    y.pop();
                else { check = true; break; }
            }
        }
        if(!y.empty() || check)
            cout << "No\n";
        else cout << "Yes\n";
    }
    return 0;
}
