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
    long n;
    while(cin >> n){
        if(n == 0) break;
        if(n >= 101)
            cout << "f91(" << n << ") = " << n-10 << "\n";
        else cout << "f91(" << n << ") = 91\n";
    }
    return 0;
}
