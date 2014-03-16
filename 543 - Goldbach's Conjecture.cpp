#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<math.h>
#include<iostream>
#include<vector>
#define N 1000000

using namespace std;

bool isPrime(long n){
    int s = sqrt(n);
    for(int i = 2; i <= s;i++){
        if(n%i == 0)
        return false;
    }
    return true;
}


int main(){
    long n , i;
    vector <long> primes;
    vector <long> :: iterator a;
    vector <long> :: iterator b;
    for(i = 2; i <= N; i++){
        if(isPrime(i))
            primes.push_back(i);
    }

    while(scanf("%d",&n) == 1){
        if(n == 0) break;
        bool check = false;
        a = primes.begin();
        while(*a < n){
            b = primes.begin();
            while(*b < n){
                if(*a + *b == n){
                    check = true;
                    break;
                }
                b++;
            }
            if(check) break;
            a++;
        }
        if(check)
            printf("%ld = %ld + %ld\n",n,*a,*b);
        else printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
