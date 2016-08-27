#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    long double n, m, a;
    cin >> n >> m >> a;
    cout << std::fixed;
    cout << setprecision(0) << ceil(n / a) * ceil(m / a) << endl;
    return 0;
}
