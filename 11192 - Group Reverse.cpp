#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string in;
    long int i,g,n,len;
    while(cin >> n){
        if(n==0) break;
        cin >> in;
        len = in.length();
        g = len/n;
        i = 0;
        while(i <= len){
            reverse(&in[i],&in[i+g]);
            i += g;
        }
        cout << in << "\n";
    }
    return 0;
}
