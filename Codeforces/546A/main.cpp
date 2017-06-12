#include <bits/stdc++.h>

using namespace std;

int main(){
    int k, n, w, total;
    cin >> k >> n >> w;
    total = k*w*(w+1)/2;
    if(total - n > 0) cout << total-n << endl;
    else cout << 0 << endl;
    return 0;
}

