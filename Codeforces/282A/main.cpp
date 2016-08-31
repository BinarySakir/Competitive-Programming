#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x = 0;
	char c[3];
	cin >> n;
	while(n--){
		cin >> c;
		if(c[1] == '+') x = x + 1;
		else x = x - 1;
	}
	cout << x << endl;
	system("pause");
	return 0;
}