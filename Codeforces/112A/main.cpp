#include <bits/stdc++.h>

using namespace std;

int main(){
	char a[101], b[101];
	cin >> a;
	cin >> b;
	for(int i = 0, j = 0; i < strlen(a), j < strlen(b); i++, j++){
		a[i] = tolower(a[i]);
		b[j] = tolower(b[j]);
	}
	cout << strcmp(a, b) << endl;
	return 0;
}