#include <iostream>

using namespace std;

int main()
{
  long long a, b, result;
  while(cin >> a >> b){
    if(a > b){
      result = a - b;
    }else{
      result = b - a;
    }
    cout << result << endl;
  }
  return 0;
}
