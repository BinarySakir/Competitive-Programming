#include <iostream>
#include <cstring>

using namespace std;

typedef unsigned long long ull;

int main(){
    int n, k;
    char c[21];
    cin >> n >> c;
    ull result = 1;
    k = strlen(c);
    while(n > 1){
        result *= n;
        n -= k;
    }
    cout << result << endl;
    return 0;
}
