#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;
    long long n, p, q;
    cin >> k;
    for(int i = 0; i < k; i++){
        cin >> n;
        if(n % 2 != 0) printf("Case %d: Impossible\n", i+1);
        else{
            for(int x = 1; ; x++){
                p = pow(2, x);
                q = n/p;
                if(n % p == 0 && q % 2 == 1) break;
            }
            cout << "Case " << i+1 << ": " << q << " " << p << endl;
        }
    }
    return 0;
}
