#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, m, kase;
    cin >> kase;
    while(kase--){
        cin >> n >> m;
        cout << (n/3) * (m/3) << endl;
    }
    return 0;
}
