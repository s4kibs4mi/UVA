#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <math.h>
#include <stack>
#include <queue>
#include <list>

using namespace std;

int digitCount(int n){
    int c = 0;
    while(n > 0) { c++; n/=10; }
    return c;
}

bool isArmstrong(int n,int p){
    long sum = 0, temp = n;
    while(n > 0){
        sum += pow(n%10,p);
        n /= 10;
    }

    // cout << sum << endl;

    if(temp == sum)
        return true;
    return false;
}

int main(){
    int test, n;
    cin >> test;
    while(test--){
        cin >> n;
        if(isArmstrong(n, digitCount(n)))
            cout << "Armstrong\n";
        else cout << "Not Armstrong\n";
    }
    return 0;
}
