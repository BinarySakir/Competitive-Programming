#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    vector<char> v;
    int len;
    while(getline(cin, s)){
        len = s.size();
        for(int i = 0; i < len; i++){
            if(s[i] != ' '){
                for(int j = i; j < len; j++){
                    if(s[j] == ' ' || j == len-1){
                        if(j == len-1){
                            v.push_back(s[j]);
                            i = j;
                        }else{
                            i = j-1;
                        }
                        break;
                    }else{
                        v.push_back(s[j]);
                    }
                }
                for(int k = v.size()-1; k >= 0; k--){
                    cout << v[k];
                }
                v.clear();
            }else{
                cout << s[i];
            }
        }
        cout << "\n";
    }
    return 0;
}
