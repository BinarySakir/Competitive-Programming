/*
ID: binarys2
PROG: gift1
LANG: C++11
*/
#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include <string>

using namespace std;

int findPair(string s, vector< pair<string, int> > p){
    int x;
    for(x = 0; x < p.size(); x++){
        if(p[x].first == s) break;
    }
    return x;
}

int main(){
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int np, dor, ded = 0, im, pos;
    string name;
    vector< pair<string, int> > vp;
    fin >> np;
    for(int i = 0; i < np; i++){
        fin >> name;
        vp.push_back(make_pair(name, 0));
    }
    for(int i = 0; i < np; i++){
        fin >> name;
        fin >> im >> dor;
        pos = findPair(name, vp);
        vp[pos].second -= im;
        if(dor > 0){
            ded = im / dor;
            vp[pos].second += im % dor;
        }
        while(dor--){
            fin >> name;
            pos = findPair(name, vp);
            vp[pos].second += ded;
        }
    }
    for(int i = 0; i < np; i++){
        fout << vp[i].first << " " << vp[i].second << '\n';
    }
    return 0;
}
