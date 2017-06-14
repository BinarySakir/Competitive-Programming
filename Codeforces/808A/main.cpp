#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int l;
    cin >> s;
    l = s.size();
    cout << (long)(((s[0] - '0') + 1) * pow(10, (l-1))) - atoi(s.c_str()) << endl;
    return 0;
}
