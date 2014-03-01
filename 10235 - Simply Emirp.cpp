#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

long int NReverse(long int n){
    long int r = 0;
    while(n > 0){
        r = (r*10) + (n%10);
        n /= 10;
    }
    return r;
}

bool IsPrime(long int n){
    int x = sqrt(n) , i;
    for(i = 2; i <= x; i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    long int n,rn;
    bool p,ep;
    while(scanf("%ld",&n) == 1){
        ep = p = false;
        p = IsPrime(n);
        rn = NReverse(n);
        if(n != rn) ep = IsPrime(rn);
        if(ep && p)
            cout << n << " is emirp.\n";
        else if(p)
            cout << n << " is prime.\n";
        else cout << n << " is not prime.\n";
    }
    return 0;
}
