#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v(4);
    int n, j, r = 0;
    for(int i = 0; i < 4; i++) cin >> v[i];
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % v[0] == 0) ++r;
        else if(i % v[1] == 0) ++r;
        else if(i % v[2] == 0) ++r;
        else if(i % v[3] == 0) ++r;
    }
    cout << r << endl;
    return 0;
}
