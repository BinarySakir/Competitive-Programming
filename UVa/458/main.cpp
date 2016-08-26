#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[1000];
    while(cin >> s){
        int l = strlen(s);
        for(int i = 0; i < l; i++){
            char char_out = s[i]-7;
            cout << char_out;
        }
        cout << endl;
    }
    return 0;
}
