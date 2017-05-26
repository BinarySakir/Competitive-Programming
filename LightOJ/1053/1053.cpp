#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    vector <int> s;
    cin >> k;
    for(int p = 0; p < k; p++){
        for(int i = 0; i < 3; i++){
            cin >> n;
            s.push_back(n);
            sort(s.begin(), s.end());
        }
        if(s[2]*s[2] == (s[1]*s[1]) + (s[0]*s[0])) cout << "Case " << p+1 << ": " << "yes" << endl;
        else cout << "Case " << p+1 << ": " << "no" << endl;
        s.clear();
    }
    return 0;
}
