#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int insertionSort(vector< int > lst){
    int kount = 0;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] < lst[i-1]){
            for(int j = 0; j < i; j++){
                if(lst[i] < lst[j]){
                    int temp = lst[i];
                    lst[i] = lst[j];
                    lst[j] = temp;
                    kount++;
                }
            }
        }
    }
    return kount;
}

int main(){
    int kase, l, n;
    cin >> kase;
    while(kase--){
        vector< int > ara;
        cin >> l;
        while(l--){
            cin >> n;
            ara.push_back(n);
        }
        cout << "Optimal train swapping takes " << insertionSort(ara) << " swaps." << endl;
    }
    return 0;
}
