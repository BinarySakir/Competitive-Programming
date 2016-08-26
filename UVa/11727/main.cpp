#include <iostream>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	int kase, kaseno = 0, n1, n2, n3;
	cin >> kase;
	while(kase--){
		cin >> n1 >> n2 >> n3;
		cout << "Case " << ++kaseno << ": ";
		if((n1 < n2 && n1 > n3) || (n1 < n3 && n1 > n2)){
			cout << n1 << endl;
		}
		if((n2 < n1 && n2 > n3) || (n2 > n1 && n2 < n3)){
			cout << n2 << endl;
		}
		if((n3 > n2 && n3 < n1) || (n3 < n2 && n3 > n1)){
			cout << n3 << endl;
		}
	}
	return 0;
}