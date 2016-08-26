#include <iostream>

using namespace std;

typedef unsigned int UI;

int main(){
  UI cases;
  UI farmers;
  UI area;
  UI animal;
  UI env;
  UI premium;

  while(cin >> cases){
    for(int i = 0; i < cases; i++){
      premium = 0;
      cin >> farmers;
      for(int i = 0; i < farmers; i++){
        cin >> area >> animal >> env;
        premium = premium + (area * env);
      }
      cout << premium << endl;
    }
  }

  return 0;
}
