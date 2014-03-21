#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    char in[1000010];
    long i , j , n , test = 1;
    while(scanf("%s",in) == 1){
        scanf("%ld",&n);
        cout << "Case " << test++ << ":\n";
        while(n--){
            scanf("%ld %ld",&i,&j);
            long a = max(i,j);
            long b = min(i,j);
            bool check = true;
            for(;b < a; b++){
                if(in[b] != in[b+1]){
                    check = false;
                    break;
                }
            }
            if(check)
                cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}
