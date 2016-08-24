#include <iostream>

using namespace std;

int main(){
    int kase, n, x, result;
    cin >> kase;
    for(int i = 1; i <= kase; i++){
        result = 0;
        cin >> n;
        while(n--){
            cin >> x;
            if(x > result){
                result = x;
            }
        }
        cout << "Case " << i << ": " << result << endl;
    }
    return 0;
}
