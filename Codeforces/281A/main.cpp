#include <iostream>
#include <cctype>

using namespace std;


int main(){
    char a[1001];
    cin >> a;
    a[0] = (char)toupper(a[0]);
    cout << a << endl;
    return 0;
}
