#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>

using namespace std;

int DigitSum(int n){
    int sum = 0;
    while(n > 0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int Validation(string x){
    int sum = 0;
    sum += DigitSum(((x[0]-48) * 2));
    sum += DigitSum(((x[2]-48) * 2));
    sum += DigitSum(((x[5]-48) * 2));
    sum += DigitSum(((x[7]-48) * 2));
    sum += DigitSum(((x[10]-48) * 2));
    sum += DigitSum(((x[12]-48) * 2));
    sum += DigitSum(((x[15]-48) * 2));
    sum += DigitSum(((x[17]-48) * 2));
    int i = 0;
    while(x[i]){
        if((i != 0) && (i != 2) && (i != 5) && (i != 7) && (i != 10) && (i != 12) && (i != 15) && (i != 17) && (x[i] != ' '))
            sum += (x[i] - 48);
        i++;
    }
    return sum;
}

int main(){
    string in;
    int n;
    cin >> n;
    getchar();
    while(n--){
        getline(cin , in);
        if((Validation(in)%10) == 0)
            cout << "Valid\n";
        else cout << "Invalid\n";
    }
    return 0;
}
