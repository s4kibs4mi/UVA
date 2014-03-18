#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string a,b;
    int i,test;
    cin >> test;
    getchar();
    while(test--){
        getline(cin,a);
        //getchar();
        getline(cin,b);
        int al = a.length() , bl = b.length();

        if(al == 0 && bl == 0){
            cout << "Yes\n";
            continue;
        }
        if(al != bl){
            cout << "No\n";
            continue;
        }
        bool check = true;
        for(i = 0; i < al; i++){
            a[i] = tolower(a[i]);
            if((a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u')
                && (b[i] != 'a' && b[i] != 'e' && b[i] != 'i' && b[i] != 'o' && b[i] != 'u') && a[i] != b[i])
                check = false;

            if((a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u') && a[i] != b[i])
                check = false;

            if((a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
               && (b[i] != 'a' && b[i] != 'e' && b[i] != 'i' && b[i] != 'o' && b[i] != 'u'))
                check = false;
        }

        if(check)
            cout << "Yes\n";
        else cout << "No\n";

    }
    return 0;
}
