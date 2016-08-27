#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char c[101];
    cin >> c;
    for(int i = 0; i < strlen(c); i++){
        char lowerCI = tolower(c[i]);
        if(lowerCI != 'a' && lowerCI != 'e' && lowerCI != 'i' && lowerCI != 'o' && lowerCI != 'u' && lowerCI != 'y'){
            cout << '.' << (char)tolower(c[i]);
        }
    }
    cout << "\n";
    return 0;
}
