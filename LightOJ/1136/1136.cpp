#include <bits/stdc++.h>

using namespace std;

int main(){
    int k, a, b, n;
    cin >> k;
    for(int i = 0; i < k; i++){
        n = 0;
        cin >> a >> b;
        n = (b/3)*2;
        if(b % 3 == 2) n += 1;
        n -= ((a-1)/3)*2;
        if((a-1) % 3 == 2) n -= 1;
        printf("Case %d: %d\n", i+1, n);
    }
    return 0;
}
