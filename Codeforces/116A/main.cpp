#include <bits/stdc++.h>

using namespace std;

int getMax(vector<int> x){
	int max = 0;
	for(int i =  0; i < x.size(); i++){
		if(x[i] > max) max = x[i];
	}
	return max;
}

int main(){
	int n, a, b, res = 0;
	vector<int> v;
	cin >> n;
	while(n--){
		cin >> a >> b;
		res -= a;
		res += b;
		v.push_back(res);
	}
	cout << getMax(v) << endl;
	return 0;
}