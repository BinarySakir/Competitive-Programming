#include <bits/stdc++.h>

using namespace std;

int main(){
	char c[31];
	while(cin >> c){
		int len = strlen(c);
		for(int i = 0; i < len; i++){
			if(c[i] == '1' || c[i] == '0' || c[i] == '-') cout << c[i];
			else if(c[i] <= 'C') cout << 2;
			else if(c[i] <= 'F') cout << 3;
			else if(c[i] <= 'I') cout << 4;
			else if(c[i] <= 'L') cout << 5;
			else if(c[i] <= 'O') cout << 6;
			else if(c[i] <= 'S') cout << 7;
			else if(c[i] <= 'V') cout << 8;
			else cout << 9;
		}
		cout << endl;
	}
	return 0;
}