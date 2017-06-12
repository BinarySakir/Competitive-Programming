#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    vector <int> v(26);
    int k, res = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        k = ((int)s[i]) - 97;
        if(v[k] == 0){
            v[k] += 1;
            res += 1;
        }
    }
    if(res % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
