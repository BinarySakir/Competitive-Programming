#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, c, a, maximum, fused;
	vector<int> v;
	int consumption, kase = 0;
	while(cin >> n >> m >> c){
		consumption = 0;
		maximum = 0;
		fused = 0;
		kase++;
		if(n == 0 && m == 0 && c == 0) break;
		vector<int> s (n);
		while(n--){
			cin >> a;
			v.push_back(a);
		}
		while(m--){
			cin >> a;
			if(s[a-1] == 0){
				consumption += v[a-1];
				s[a-1] = 1;
			}else{
				consumption -= v[a-1];
				s[a-1] = 0;
			}

			if(consumption > c) fused = 1;
			else{
				if(consumption > maximum) maximum = consumption;
			}
		}
		if(fused == 1){
			cout << "Sequence " << kase << endl;
			cout << "Fuse was blown." << endl << endl;
		}else{
			cout << "Sequence " << kase << endl;
			cout << "Fuse was not blown." << endl;
			cout << "Maximal power consumption was " << maximum << " amperes." << endl << endl;
		}
		v.clear();
	}
	return 0;
}