/*
ID: binarys2
PROG: friday
LANG: C++11
*/
#include <bits/stdc++.h>
#include <fstream>

using namespace std;

bool leapYear(int y){
    if(y % 4 != 0) return false;
    else{
        if(y % 100 == 0){
            if(y % 400 == 0) return true;
            else return false;
        }else return true;
    }
}

int main(){
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int n, d, x = 0;
    int wd13[7] = {0, 0, 0, 0, 0, 0, 0};
    int md[12]  = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    fin >> n;
    for(int i = 1900; i < 1900+n; i++){
        if(leapYear(i)) md[1] = 29;
        for(int j = 0; j < 12; j++){
            d = ((13+x) - 1) % 7;
            wd13[d] += 1;
            x += md[j];
        }
        md[1] = 28;
    }
    fout << wd13[5] << " " << wd13[6];
    for(int k = 0; k < 5; k++) fout << " " << wd13[k];
    fout << '\n';
    return 0;
}
