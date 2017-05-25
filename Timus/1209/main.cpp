#include <bits/stdc++.h>

using namespace std;

typedef long int ll;

int p(ll n){
    ll x1, x2;
    n -= 1;
    n *= 2;
    x1 = ((-1) + sqrt(1+(4*n)))*0.5;
    x2 = ((-1) - sqrt(1+(4*n)))*0.5;
    if(abs(x1)*abs(x2) == n) return 1;
    else return 0;
}

int main(){
    ll k, n;
    vector <int> v;
    cin >> k;
    while(k--){
        cin >> n;
        v.push_back(p(n));
    }
    for(int i = 0; i < v.size(); i++){
        if(i != v.size()-1){
            cout << v[i] << " ";
        }else{
            cout << v[i] << endl;
        }
    }
    return 0;
}
