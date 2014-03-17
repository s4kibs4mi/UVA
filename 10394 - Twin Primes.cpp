#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>

#define MAX 20000000
#define LMT 10000
#define ifc(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define isc(n) (flag[n>>6]|=(1<<((n>>1)&31)))

using namespace std;

unsigned flag[MAX>>6];

void sieve(){
    unsigned i, j, k;
    for(i=3; i<LMT; i+=2)
        if(!ifc(i))
            for(j=i*i, k=i<<1; j<MAX; j+=k)
                isc(j);
}

int main(){
    int n,i;
    sieve();
    vector <long> primes;
    vector <pair <long,long> > twins;
    vector <long> :: iterator a;
    vector <long> :: iterator b;
    vector <long> :: iterator c;
    vector <long> :: iterator d;

    primes.push_back(2);
    for(i = 3; i <= MAX; i += 2){
        if(!ifc(i))
            primes.push_back(i);
    }

    a = primes.begin();
    while(*a){
        if(*a+2 == *(a+1))
            twins.push_back(make_pair(*a,*(a+1)));
        a++;
    }

    while(scanf("%d",&n) == 1){
        if(n == 0) break;
        cout << "(" << twins[n-1].first << ", " << twins[n-1].second << ")\n";
    }
    return 0;
}
