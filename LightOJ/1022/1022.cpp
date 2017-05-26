#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;
    double r, res;
    cin >> k;
    for(int i = 0; i < k; i++){
        cin >> r;
        res = (4*r*r) - (acos(-1)*r*r);
        printf("Case %d: %.2lf\n", i+1, res);
    }
    return 0;
}
