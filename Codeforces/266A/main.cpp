#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, res = 0;
	char c[51];
	cin >> n;
	cin >> c;
	for(int i = 1; i < strlen(c); i++){
		if(c[i] == c[i-1]){
			res++;
		}
	}
	cout << res << endl;
	return 0;
}