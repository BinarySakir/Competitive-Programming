#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){
    vector<int> order;
    vector<string> ara;
    int n, k, it;
    string j, line, blankLine;
    cin >> n;
    while(n--){
        getline(cin, blankLine);
        // get the first line
        getline(cin >> ws, line);
        istringstream isO(line);
        while(isO >> k) order.push_back(k);
        // get the second line
        getline(cin, line);
        istringstream isA(line);
        while(isA >> j) ara.push_back(j);
        // print the number according to the order
        for(int i = 1; i <= order.size(); i++){
            it = find(order.begin(), order.end(), i) - order.begin();
            cout << ara[it] << endl;
        }
        if(n != 0) cout << '\n';
        ara.clear(); order.clear();
    }
    return 0;
}
