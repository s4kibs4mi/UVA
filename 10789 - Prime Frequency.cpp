#include <iostream>
#include <cstdio>
#include <map>
#include <math.h>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

bool isPrime(long n){
    long s = sqrt(n);
    if(n < 2) return false;
    for(int i = 2; i <= s; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

int main(){
    string a;
    int i,t;
    cin >> t;
    getchar();
    i = 1;
    while(i <= t){
        cin >> a;
        map <char,long> mp;
        map <char,long> :: iterator it;
        for(int j = 0; a[j]; j++){
            mp[a[j]]++;
        }
        bool check = true;
        it = mp.begin();
        cout << "Case " << i << ": ";
        while(it != mp.end()){

            if(isPrime(it->second)){
                printf("%c",it->first);
                check = false;
            }
            it++;
        }
        if(check) cout << "empty";
        cout << endl;
        i++;
    }
    return 0;
}
