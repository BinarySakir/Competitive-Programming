#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ull c;
	vector<double> v;
	while(cin >> c){
		v.push_back((double)sqrt(c));
	}
	for(int i = v.size() - 1; i >= 0; i--){
		cout << fixed << setprecision(4) << v[i] << endl;
	}
	system("pause");
	return 0;
}