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
        if(n < 0) break;
        cout << ((n*n) + n + 2)/2 << "\n";
    }
    return 0;
}
