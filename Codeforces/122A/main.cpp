#include <bits/stdc++.h>

using namespace std;

int main(){
    int ara[10] = {4, 7, 47, 74, 447, 474, 477, 744, 774, 777};
    int n, p = 0;
    cin >> n;
    for(int i = 0; i < 10; i++){
        if(n % ara[i] == 0){
            p = 1;
        }
    }
    if(p == 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
