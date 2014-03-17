#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdio>

using namespace std;

string toBinary(long n){
    string res;
    while(n > 0){
        res.push_back((n%2) + 48);
        n /= 2;
    }
    reverse(res.begin(),res.end());
    return res;
}

int main(){
    long n;
    while(scanf("%ld",&n) == 1){
        if(n == 0) break;
        string temp = toBinary(n);
        long i,cnt = 0;
        for(i = 0;temp[i]; i++){
            if(temp[i] == '1')
                cnt++;
        }
        cout << "The parity of " << temp << " is " << cnt << " (mod 2).\n";
    }
    return 0;
}
