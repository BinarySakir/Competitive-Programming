#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef unsigned long ul;

ul cycle(ul n){
    ul c = 1;
    while(n != 1){
        if(n%2 == 0) n/=2;
        else n = 3*n + 1;
        c += 1;
    }
    return c;
}

int main(){
    ul i, j, s, p;
    s = 0;
    while(cin >> i >> j){
	    if(i <= j){
		    for(int k = i; k <= j; k++){
		         p = cycle(k);
		         if(p > s) s = p;
		    }
	    }else{
		    for(int k = j; k <= i; k++){
		    	p = cycle(k);
		        if(p > s) s = p;
		    }
	    }
	    cout << i << " " << j << " " << s << endl;
	    s = 0;
    }
}
