#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    bool  open = true, close = false;
    vector <string> v;
    while(getline(cin, s)){
        v.push_back(s);
    }
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            if(open && v[i][j] == '\"'){
                cout << "``";
                open = false;
                close = true;
            }else if(close && v[i][j] == '\"'){
                cout << "''";
                close = false;
                open = true;
            }else{
                cout << v[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}
