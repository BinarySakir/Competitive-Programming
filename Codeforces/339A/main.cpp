#include <bits/stdc++.h>

using namespace std;

int main(){
	char c[101];
	vector <int> nums;
	cin >> c;
	int len = strlen(c);
	if(len == 1) cout << c << endl;
	else{
		for(int i = 0; i < len; i++){
			if(c[i] != '+'){
				nums.push_back(c[i] - '0');
			}
		}
		sort(nums.begin(), nums.end());
		for(int i = 0; i < nums.size(); i++){
			if(i != nums.size()-1) cout << nums[i] << "+";
			else cout << nums[i] << endl;
		}
	}
	return 0;
}