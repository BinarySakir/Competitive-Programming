/*
ID: binarys2
PROG: ride
LANG: C++11
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string sC, sG;
    long productC = 1, productG = 1;
    fin >> sC >> sG;
    for(int i = 0; i < sC.size(); i++){
        productC *= ((int) sC[i]) - 64;
    }
    for(int i = 0; i < sG.size(); i++){
        productG *= ((int) sG[i]) - 64;
    }
    if((productC % 47) == (productG % 47)) fout << "GO" << '\n';
    else fout << "STAY" << '\n';
    return 0;
}
