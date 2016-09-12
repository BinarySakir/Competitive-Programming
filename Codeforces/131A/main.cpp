#include <bits/stdc++.h>

using namespace std;

int numberOfUppercase(char * c){
	int k = 0;
	for(int i = 0; i < strlen(c); i++){
		if(isupper(c[i])) k++;
	}
	return k;
}

int main(){
	char c[101];
	cin >> c;
	if(numberOfUppercase(c) == strlen(c)){
		for(int i = 0; i < strlen(c); i++){
			if(isupper(c[i])) cout << (char)tolower(c[i]);
			else cout << (char)toupper(c[i]);
		}
		cout << endl;
	}else if(numberOfUppercase(c) == strlen(c)-1 && islower(c[0])){
		for(int i = 0; i < strlen(c); i++){
			if(isupper(c[i])) cout << (char)tolower(c[i]);
			else cout << (char)toupper(c[i]);
		}
		cout << endl;
	}else{
		cout << c << endl;
	}
	return 0;
}