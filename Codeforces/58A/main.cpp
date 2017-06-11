#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    string h = "hello";
    int t = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == h[t]) ++t;
    }
    if(t == 5){
         cout << "YES"  << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
