#include <iostream>

using namespace std;

int main(){
    int f;
    cin >> f;
    int q = 12-f;
    if(q * 0.75 <= 4) cout << "YES" << endl;
    else cout << "NO" << endl;
    /*
        if(f >= 7) cout << "YES" << endl;
        else cout << "NO" << endl;
    */
    return 0;
}
