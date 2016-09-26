#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, res;
	cin >> t;
	while(t--){
		cin >> n;
		res = abs(((((63*n)+7492)*5)-498));
		cout << (res/10)%10 << endl;
	}
	return 0;
}