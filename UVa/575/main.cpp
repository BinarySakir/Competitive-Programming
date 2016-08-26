#include <bits/stdc++.h>

using namespace std;

int main(){
	string n;
	while(cin >> n){
		int d = 0;
		if(n == "0") break;
		int len = n.size();
		// using (int)n.size() below so that the
		// value doesn't change for 'len--' on line 14
		for(int i = 0; i < (int)n.size(); i++){
			int n_i_int = n[i] - '0';
			d += (n_i_int * (pow(2,len)-1));
			len--;
		}
		cout << d << endl;
	}
}
