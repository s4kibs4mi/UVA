#include <iostream>
#include <map>

using namespace std;

map<int,string> init_week(){
    map<int,string> mp;
    mp[0] = "Monday";
    mp[1] = "Tuesday";
    mp[2] = "Wednesday";
    mp[3] = "Thursday";
    mp[4] = "Friday";
    mp[5] = "Saturday";
    mp[6] = "Sunday";
    return mp;
}

map<int,string> mp = init_week();
int months[] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
    int test;
    cin >> test;
    while(test--){
        int x,y;
        cin >> x >> y;
        int sum = 0;
        for(int j = 0; j < x-1; j++)
            sum += months[j];
        sum += y - 1;
        if(sum > 7)
            sum = sum%7;
        sum += 6;
        if(sum > 7)
            sum -= 7;
        cout << mp[sum-1] << endl;
    }
    return 0;
}
