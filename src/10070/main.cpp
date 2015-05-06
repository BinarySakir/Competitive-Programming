#include <iostream>

using namespace std;

int main(){
  cin.sync_with_stdio(false);
  int year;
  while(1){
    cin.sync_with_stdio(false);
    cin >> year;
    if(year % 4 != 0 && year % 15 != 0 && year % 4 != 55){
      cout << "This is an ordinary year." << endl;
    }
    if(year % 4 == 0){
      cout << "This is leap year." << endl;
    }
    if(year % 15 == 0){
      cout << "This is huluculu festival year." << endl;
    }
    if(year % 55 == 0){
      cout << "This is bulukulu festival year." << endl;
    }
  }
  return 0;
}
