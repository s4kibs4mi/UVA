#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

bool isValid(long a,long b,long c){
    if(a + b <= c)
        return false;
    if(b + c <= a)
        return false;
    if(a + c <= b)
        return false;
    return true;
}

int main(){
    long a,b,c,test;
    cin >> test;
    for(int i = 1; i <= test; i++){
        cin >> a >> b >> c;
        if(!isValid(a,b,c)){
            cout << "Case " << i << ": Invalid\n";
            continue;
        }
        if(a == b && b == c)
            cout << "Case " << i << ": Equilateral\n";
        else if(a == b || b == c || a == c)
            cout << "Case " << i << ": Isosceles\n";
        else if(a != b && b != c && c != a) cout << "Case " << i << ": Scalene\n";
    }

    return 0;
}
