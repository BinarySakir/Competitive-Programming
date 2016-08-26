#include <iostream>

using namespace std;

int main(){
    double h, u, d, f;
    while(cin >> h >> u >> d >> f && h != 0){
        f = u*(f/100);
        int day = 0;
        double climbed = 0;
        while(true){
            day++;
            if(u > 0) climbed += u;
            u -= f;
            if(climbed > h) break;
            climbed -= d;
            if(climbed < 0) break;
        }
        if(climbed >= 0) cout << "success on day " << day << endl;
        else cout << "failure on day " << day << endl;
    }
    return 0;
}
