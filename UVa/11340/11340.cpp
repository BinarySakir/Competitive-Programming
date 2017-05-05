#include <iostream>
#include <map>
#include <string>
#include <cstdio>

using namespace std;

int main(){
    cin.tie(NULL);
    int k, n1, n2;
    char c, i;
    double p, result = 0;
    string line;
    map <char, double> m;
    map <char, double>::iterator it;
    scanf("%d", &k);
    while(k--){
        scanf("%d", &n1);
        while(n1--){
            cin >> c >> p;
            m[c] = p;
        }
        scanf("%d", &n2);
        cin.ignore();
        while(n2--){
            getline(cin, line);
            for(int i = 0; i < line.size(); i++){
                result += m[line[i]];
            }
        }
        result /= 100;
        printf("%0.2lf$\n", result);
        result = 0;
        m.clear();
    }
    return 0;
}
