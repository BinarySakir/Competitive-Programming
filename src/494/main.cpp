#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char sentence[5000];
    char * pch;
    while(cin.getline(sentence, 5000)){
        pch = strtok(sentence, " 1234567890.:,;-_?¡¿'&%$#\"!)(@+-*/");
        int kount = 0;
        while(pch != NULL){
            pch = strtok(NULL, " 1234567890.:,;-_?¡¿'&%$#\"!)(@+-*/");
            kount++;
        }
        cout << kount << endl;
    }
    return 0;
}
