#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, r = 0;
    cin >> n;
    for(int i = 1; i*floor(i/2) < n; i++){
        if(i % 2 == 1){
            if(n % i == 0) r += 1;
        }else{
            if(n % (i/2) == 0 && (n / (i/2)) % 2 == 1) r += 1;
        }
    }
    cout << r << endl;
    return 0;
}
