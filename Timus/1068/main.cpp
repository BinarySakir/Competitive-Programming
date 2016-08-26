#include <iostream>

using namespace std;

int main(){
    int n, res = 0;
    cin >> n;
    if(n > 0){
        res = (n*(n+1))/2;
        cout << res << endl;
    }else if(n < 0){
        for(int i = 1; i >= n; i--){
            res += i;
        }
        cout << res << endl;
    }else{
        cout << 1 << endl;
    }
    return 0;
}
