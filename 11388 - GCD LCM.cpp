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

int LCM(int a, int b) {
  return (a / GCD(a, b)) * b;
}

int main(){
    int n,a,b,gcd,lcm;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        gcd = GCD(a,b);
        lcm = LCM(a,b);
        if(gcd != a && lcm != b)
            cout << -1 << "\n";
        else cout << gcd << " " << lcm << "\n";
    }
    return 0;
}
