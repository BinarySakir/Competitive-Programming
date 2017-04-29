#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char s[80];
    int score = 0, j = 1, k;
    cin >> k;
    while(k--){
        cin >> s;
        for(int i = 0; i < strlen(s); i++){
            if(s[i] == 'O'){
                score += j;
                j++;
            }else{
                j = 1;
            }
        }
        cout << score << endl;
        score = 0;
        j = 1;
    }
    return 0;
}
