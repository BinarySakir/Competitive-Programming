#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, l;
    char c[101];
    cin >> n;
    while(n--){
        cin >> c;
        l = strlen(c);
        if(l > 10){
            cout << c[0] << l-2 << c[l-1] << endl;
        }else{
            cout << c << endl;
        }
    }
}
