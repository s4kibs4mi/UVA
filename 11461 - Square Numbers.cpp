#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<string.h>
#include<math.h>

using namespace std;

bool isSquare(int x){
    int n = sqrt(x);
    if(n*n == x) return true;
    return false;
}

int main(){
    int x,y;
    while(scanf("%d %d",&x,&y) == 2){
        if(x == 0 && y == 0) break;
        int count = 0;
        for(;x <= y; x++){
            if(isSquare(x))
                count++;
        }
        cout << count << "\n";
    }
    return 0;
}
