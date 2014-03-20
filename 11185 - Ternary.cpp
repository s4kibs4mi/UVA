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

string toTernary(long n){
    string num;
    if(n == 0)
        return "0";
    while(n > 0){
        num.push_back((n%3) + 48);
        n /= 3;
    }
    reverse(num.begin(),num.end());
    return num;
}

int main(){
    long n;
    while(cin >> n){
        if(n < 0) break;
        cout << toTernary(n) << "\n";
    }
    return 0;
}
