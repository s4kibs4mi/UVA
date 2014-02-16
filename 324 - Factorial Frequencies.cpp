#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<vector>

using namespace std;

long int cr;

class Integer{
	private:
		string c;
	public:
		// Method to check within Two Integer number which is Big or same
		string BigIntFind(string a,string b){
			if(a.length() < b.length()) swap(a,b);
			string d = b;
			reverse(b.begin(),b.end());
			while(b.length() < a.length()) b.push_back('0');
			reverse(b.begin(),b.end());
			int i = 0;
			while(a[i]){
				if(a[i] > b[i]) return a;
				else if(a[i] < b[i]) return d;
				i++;
			}
			return "same";
		}

		// Method to make power
		string Power(long int base,long int power){
			string res = "1";
			while(power--){
				res = M(res,base);
			}
			return res;
		}
		
		// Method to make Factorial
		string Fact(long int n){
			string res = "1";
			while(n){
				res = M(res,n--);
			}
			return res;
		}
		
		// Method to Findout Digits of a number
		long int Digit(long int n){
			long int i = 0;
			if(n==0) return 1;
			for(;n > 0; i++) n /= 10;
			return i;
		}

		// Method to Convert string to number
		long int s2li(string a){
			long int n = 0;
			for(int i=0; a[i]; i++) n = ( n*10 ) + (a[i]-48);
			return n;
		}

		// Method to Convert number to string
		string li2s(long int a){
			c.clear();
			if(a==0){ c.push_back(a+48); return c; }
			while(a > 0){
				c.push_back((a%10)+48);
				a /= 10;
			}
			reverse(c.begin(),c.end());
			return c;
		}

		// Method to Add two Integer number
		string Add(string a,string b){
			c.clear();
			reverse(a.begin(),a.end());
			reverse(b.begin(),b.end());
			if(a.length() < b.length())
				swap(a,b);
			while(int(b.length()) < int(a.length()))
				b.push_back('0');

			int i = 0,carry = 0;
			while(a[i]){
				carry = carry + a[i]-48 + b[i]-48;
				c.push_back((carry %10) + 48);
				carry = carry / 10;
				if(carry != 0) cr++;
				i++;
			}
			while(carry > 9){
				c.push_back((carry % 10) + 48);
				carry = carry / 10;
				cr++;
			}
			if(carry != 0) c.push_back(carry + 48);
			reverse(c.begin(),c.end());
			return c;
		}

		// Method to Substruct within two Integer number
		string Minus(string a,string b){
			c.clear();
			bool flag = true;
			if(BigIntFind(a,b)==b){
				swap(a,b);
				flag = false;
			}
			reverse(a.begin(),a.end());
			reverse(b.begin(),b.end());
			while(b.length() < a.length()) b.push_back('0');
			int i = 0,carry = 0,x = 0;
			while(a[i]){
				if(b[i] > a[i]) x = (a[i]-48) + 10;
				else x = a[i]-48;
				carry = x-(carry + (b[i]-48));
				c.push_back(carry+48);
				carry = x / 10;
				i++;
			}
			while(c[c.length()-1]=='0' && c.length() > 1) c.erase(c.length()-1,1);
			if(!flag) c.push_back('-');
			reverse(c.begin(),c.end());
			return c;
		}

		// Method for multiplication
		string M(string a,long int b){
			c.clear();
			long int m = 0,i;
			reverse(a.begin(),a.end());
			for(i = 0; a[i] ; i++){
				m = m + b * (a[i]-'0');
				c.push_back((m%10) + 48);
				m /= 10;
			}
			while(m > 0){
				c.push_back((m%10) + 48);
				m /= 10;
			}
			reverse(c.begin(),c.end());
			return c;
		}

		// Method for division
		string D(char ch,string a,long int b){
			c.clear();
			long int Len = a.length(),mod = 0,d = Digit(b),V = 0,i;
			i = 0;
			while(i < d || V < b){ V = (V * 10) + (a[i]-48); i++; }
			while(i < Len +1){

				c.push_back((V/b)+48);
				mod = V % b;
				V = (mod*10) + (a[i]-48);
				if(b > V) { i++; V = (V*10) + (a[i]-48); if(i!=Len+1) c.push_back('0'); }
				i++;
			}
			if(c.empty()) c = "0";
			if(ch=='m') c = li2s(mod);
			return c;
		}

		// Method to Generate Fibonacci numbers
		void F(string a,string b,long unsigned int n){
	    	if(n){
				cout << a << endl;
				c = Add(a,b);
				F(b,c,--n);
			}
		}
		
		// Method to Convert number from decimal to any other base
		string D2All(string temp,long int base){
			string conv;
			bool flag;
			long int numb,res,i;
			if(temp=="1") return "1";
			if(temp=="0") return "0";
			while(s2li(temp) >= base){
				numb = 0, res = 0, i = 0;
				while(numb <= base && temp[i])
					numb = (numb*10) + (temp[i++]-48);
				while(temp[i] || numb >= base){
					res = (res*10) + (numb/base);
					numb = numb%base;
					flag = false;
					while(numb <= base && temp[i]){
						numb = (numb*10) + (temp[i++]-48);
						if(flag) res = (res*10);
						flag = true;
					}
				}
				if(flag && numb < base)
					res = (res*10);
				if(numb >= 0 && numb <= 9)
					conv.push_back(numb+48);
				else
					conv.push_back((numb%10)+65);
				temp = li2s(res);
			}
			if(res != 0 && res < base){
				if(res >= 0 && res <= 9)
					conv.push_back(res+48);
				else
					conv.push_back((res%10)+65);
			}
			reverse(conv.begin(),conv.end());
			return conv;
		}
		
		// Method to Convert number from Any Base to Decimal
		string All2D(string temp, long int base){
			string dec;
			long int i;
			reverse(temp.begin(),temp.end());
			i = 0;
			while(temp[i]){
				if(temp[i] != '0'){
					if(temp[i] >= 65){
						dec = Add(dec,M(Power(base,i),((temp[i]%65)+10)));
					}
					else{
						dec = Add(dec,M(Power(base,i),((temp[i]-48))));
					}
				}
				i++;
			}
			return dec;
		}
		
		// Method to Check Palindrome
		bool IsPalindrome(string s){
			long int i, n = s.length(),n2;
			n2 = n/2;
			for(i = 0; i <= n2; i++){
				if(s[i] != s[n-i-1])
					return false;
			}
			return true;
		}
};

void format(int a,int b){
	Integer Int;
	a = Int.Digit(a);
	b = Int.Digit(b);
	if(b > a && (a != b)){
		while(b != 0){
			printf(" ");
			b /= 10;
		}
	}
}

void format1(int a,int b){
	Integer Int;
	a = Int.Digit(a);
	b = Int.Digit(b);
	if(b < a && (a != b)){
		while(a != 0){
			printf(" ");
			a /= 10;
		}
	}
}

int main(){
	Integer Int;
	long int n,i;
	string o;
	vector <int> x;
	while(cin >> n){
		if(n==0) break;
		o = Int.Fact(n);
		int p = 10;
		while(p--) x.push_back(0);
		for(i=0; o[i]; i++){
			x[o[i]-48]++;
		}
		cout << n << "! --" << endl;
		cout << "   (0)    ";
		format(x[0],x[5]);
		cout << x[0] << "    (1)    ";
		format(x[1],x[6]);
		cout << x[1] << "    (2)    ";
		format(x[2],x[7]);
		cout << x[2] << "    (3)    ";
		format(x[3],x[8]);
		cout << x[3] << "    (4)    ";
		format(x[4],x[9]);
		cout << x[4] << endl;
		cout << "   (5)    ";
		format1(x[0],x[5]);
		cout << x[5] << "    (6)    ";
		format1(x[1],x[6]);
		cout << x[6] << "    (7)    ";
		format1(x[2],x[7]);
		cout << x[7] << "    (8)    ";
		format1(x[3],x[8]);
		cout << x[8] << "    (9)    ";
		format1(x[4],x[9]);
		cout << x[9] << endl;
		x.clear();
	}
	return 0;
}
