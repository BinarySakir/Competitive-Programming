#include <bits/stdc++.h>

using namespace std;

int main(){
	string c;
	int zero = 0, one = 0;
	bool no = true;
	cin >> c;
	for(int i = 0; i < c.size(); i++){
		if(c[i] == '0'){
			if(c[i-1] == '1') one = 0;
			++zero;
			if(zero >= 7){
				cout << "YES" << endl;
				no = false;
				break;
			}
		}
		if(c[i] == '1'){
			if(c[i-1] == '0') zero = 0;
			++one;
			if(one >= 7){
				cout << "YES" << endl;
				no = false;
				break;
			}
		}
	}
	if(no == true) cout << "NO" << endl;
	return 0;
}