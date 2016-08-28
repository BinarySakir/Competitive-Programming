#include <bits/stdc++.h>

using namespace std;

// 15000th prime is 163841
// So rounded to 164000

#define MAX 164000

bool primeArray[MAX+1];

void sieve(){
    fill_n(primeArray, MAX, true);
    for(int i = 3; i*i <= MAX; i++){
        if(primeArray[i] == true){
            for(int j = i*i; j <= MAX; j+=i){
                primeArray[j] = false;
            }
        }
    }
}

bool isPrime(int n){
    if(n < 2) return false;
    else if(n  == 2) return true;
    else if(n  % 2 == 0) return false;
    else return primeArray[n] == true;
}

int main(){
    int k, n;
    vector<int> v;
    sieve();
    for(int i = 2; i < MAX; i++){
        if(isPrime(i)) v.push_back(i);
    }
    cin >> k;
    while(k--){
        cin >> n;
        cout << v[n-1] << endl;
    }
    return 0;
}
