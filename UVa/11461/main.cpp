#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num1, num2, i_square, i, kount = 0;
    double d_square;

    while(1){
        cin >> num1 >> num2;
        if(num1 == 0 && num2 == 0){
            break;
        }else{
            for(i = num1; i <= num2; i++){
                d_square = sqrt(i);
                i_square = d_square;
                if(d_square == i_square){
                    kount += 1;
                }
            }
            cout << kount << endl;
            kount = 0;
        }
    }
    return 0;
}
