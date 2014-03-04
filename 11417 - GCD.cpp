#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<string.h>
#include<math.h>

using namespace std;

int GCD(int a, int b){
    return b == 0 ? a : GCD(b, a % b);
}

int main(){
    int n;
    while(scanf("%d",&n) == 1){
        if(n == 0) break;
        int G = 0;
        for(int i = 1; i < n; i++){
            for(int j = i+1; j <= n; j++){
                G += GCD(i,j);
            }
        }
        cout << G << "\n";
    }
    return 0;
}
