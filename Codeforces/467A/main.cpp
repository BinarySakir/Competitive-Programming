#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p, q, x = 0;
    cin >> n;
    while(n--){
        cin >> p >> q;
        if(q - p >= 2) ++x;
    }
    cout << x << endl;
    return 0;
}
