#include <iostream>

using namespace std;

int main(){
  int kases, l, w, h, kount = 0;
  cin >> kases;
  while(kases--){
    cin >> l >> w >> h;
    cout << "Case " << ++kount << ": ";
    if(l <= 20 && w <= 20 && h <= 20){
      cout << "good" << endl;
    }else{
      cout << "bad" << endl;
    }
  }
  return 0;
}
