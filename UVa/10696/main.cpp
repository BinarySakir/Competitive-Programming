#include <bits/stdc++.h>

using namespace std;

long long f91(long long n){
    if(n <= 100){
        return f91(f91(n+11));
    }
    if(n >= 100){
        return n-10;
    }
}

int main(){
    long long x;
    while(cin >> x){
        if(x == 0) break;
        cout << "f91(" << x  << ") = " << f91(x) << endl;
    }
    return 0;
}
