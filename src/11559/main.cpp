#include <iostream>

using namespace std;

int main(){
    int n, b, w, h;
    while(cin >> n >> b >> h >> w){
        long p = 0, a = 0, ans = 99999999;
        for(int i = 0; i < h; i++){
            cin >> p;
            for(int j = 0; j < w; j++){
                cin >> a;
                if(a >= n && n*p <= b && n*p < ans){
                    ans = n*p;
                }
            }
        }
        if(ans == 99999999) cout << "stay home" << endl;
        else cout << ans << endl;
    }
    return 0;
}
