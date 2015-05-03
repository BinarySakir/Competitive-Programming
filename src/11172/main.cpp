#include <iostream>

using namespace std;

int main(){
    int kases;
    long long a, b;
    cin >> kases;
    while(kases--){
        cin >> a >> b;
        if(a > b){
            cout << ">" << endl;
        }
        else if(a < b){
            cout << "<" << endl;
        }
        else{
            cout << "=" << endl;
        }
    }
    return 0;
}
