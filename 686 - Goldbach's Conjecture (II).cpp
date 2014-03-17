#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <set>
#define N 32768

using namespace std;

bool isPrime(long n){
    long s = sqrt(n);
    for(int i = 2; i <= s; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

int main(){
    vector <long> primes;
    vector <long> :: iterator a;
    vector <long> :: iterator b;
    int i , n;
    for(i=2;i <= N;i++){
        if(isPrime(i))
            primes.push_back(i);
    }
    while(scanf("%d",&n) == 1){
        if(n == 0) break;
        long cnt = 0;
        a = primes.begin();
        while(*a < n){
            b = primes.begin();
            while(*b < n){
                if(*a <= *b && *a + *b == n)
                    cnt++;
                b++;
            }
            a++;
        }
        cout << cnt << "\n";
    }
    return 0;
}
