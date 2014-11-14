#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<string> list;
        int n;
        cin >> n;
        while(n--){
            string a;
            cin >> a;
            list.push_back(a);
        }
        sort(list.begin(),list.end());
        bool check = true;
        n = list.size();
        for(int i = 0; i < n - 1; i++){
            if(list[i+1].size() >= list[i].size()){
                if(list[i] == list[i+1].substr(0,list[i].size())){
                    check = false;
                    break;
                }
            }
        }

        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
