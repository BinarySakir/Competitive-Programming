#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, count = 0;
	string c;
	vector<string> v;
	cin >> n;
	while(n--){
		cin >> c;
		if((c[0] == 'O' && c[1] == 'O') || (c[3] == 'O' && c[4] == 'O')){
			if(count != 1){
				if(c[0] == 'O' && c[1] == 'O'){
					v.push_back("++|"+c.substr(3, 4));
				}else{
					v.push_back(c.substr(0, 2)+"|++");
				}
				count = 1;
			}else{
				v.push_back(c);
			}
		}else{
			v.push_back(c);
		}
	}
	if(count == 1){
		cout << "YES" << endl;
		for (int i = 0; i < v.size(); ++i){
			cout << v[i] << endl;
		}
	}else{
		cout << "NO" << endl;
	}
	// system("pause");
	return 0;
}