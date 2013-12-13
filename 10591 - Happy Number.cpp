#include<iostream>

using namespace std;

bool MakeSum(int x){
	long int sum = 0;
	while(x > 0){
		sum += (x%10)*(x%10);
		x /= 10;
	}
	if(sum > 9) return MakeSum(sum);
	if(sum == 1) return true;
	return false;
}

int main(){
	int t,i,n;
	cin >> t;
	i = 1;
	while(i <= t){
		cin >> n;
		if(MakeSum(n))
			cout << "Case #" << i << ": " << n << " is a Happy number." << endl;
		else cout << "Case #" << i << ": " << n << " is an Unhappy number." << endl;
		i++;
	}
	
	return 0;
}
