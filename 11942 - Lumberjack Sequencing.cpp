#include<iostream>
#include<algorithm>

using namespace std;

bool SeqCheck(int x[],int y[]){
	for(int i = 0; i < 10 ; i++){
		if(x[i] != y[i])
			return false;
	}
	return true;
}

int main(){
	int num[15],temp[15],n,i,m = 10;
	bool IsOK;
	cin >> n;
	cout << "Lumberjacks:" << endl;
	while(n--){
		i = 0;
		while(i < m){ cin >> num[i]; temp[i] = num[i]; i++; }
		sort(num,num+10);
		IsOK = SeqCheck(num,temp);
		if(IsOK){ cout << "Ordered" << endl; continue; }
		else{
			reverse(num,num+10);
			IsOK = SeqCheck(num,temp);
			if(IsOK){ cout << "Ordered" << endl; }
			else cout << "Unordered" << endl;
		}
	}
	return 0;
}
