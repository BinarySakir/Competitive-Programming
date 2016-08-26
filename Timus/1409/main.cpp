#include <iostream>

using namespace std;

int main(){
    int h, l, total;
    cin >> h >> l;
    total = (h+l)-1;
    cout << total-h << " " << total-l << endl;
    return 0;
}
