#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, k, a, ara[51], araSize = 0, res = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a;
        ara[i] = a;
        araSize++;
    }
    sort(ara, ara + araSize);
    reverse(ara, ara + araSize);
    for(int i = 0; i < araSize; i++){
        if(ara[i] != 0 && ara[i] >= ara[k-1]) res++;
        else break;
    }
    cout << res << endl;
    return 0;
}
