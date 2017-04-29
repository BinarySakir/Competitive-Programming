#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long int n, s, d;
    cin >> n;
    while(n--){
        cin >> s >> d;
        if(s < d || (s+d)%2 != 0) cout << "impossible" << endl;
        else{
            cout << (s+d)/2 << " " << s-((s+d)/2) << endl;
        }
    }
    return 0;
}
