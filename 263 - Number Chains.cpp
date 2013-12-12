#include<iostream>
#include<set>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

vector <long int> Hold;

long int MakeInt(vector <long int> x){
	vector <long int> :: iterator it;
	it = x.begin();
	long int n = 0;
	while(it!=x.end()){
		n = (n*10) + *it;
		it++;
	}
	return n;
}

void Process(long int x,long int chain){
	vector <long int> Numb;
	vector <long int> RevNumb;
	long int newi,temp,a,b;
	temp = x;
	Hold.push_back(x);
	chain++;
	while(x > 0){
		Numb.push_back(x%10);
		x /= 10;
	}
	sort(Numb.begin(),Numb.end());
	RevNumb = Numb;
	reverse(RevNumb.begin(),RevNumb.end());
	a = MakeInt(RevNumb);
	b = MakeInt(Numb);
	newi = a - b;
	if(find(Hold.begin(),Hold.end(),newi)==Hold.end()){
		cout << a << " - " << b << " = " << newi << endl;
		Process(newi,chain);
	}
	else{
		cout << a << " - " << b << " = " << newi << endl;
		cout << "Chain length " << chain << "\n" << endl;
	}
}

int main(){
	long int input;
	while(cin >> input){
		if(input==0) break;
		Hold.clear();
		cout << "Original number was " << input << endl;
		Process(input,0);
	}
	return 0;
}
