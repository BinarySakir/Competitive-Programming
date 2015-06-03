#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int main(){
    LL i, rangeStart, rangeEnd, cycleLength, maxCycleLength, temp, rangeStartTemp, rangeEndTemp;
    while(cin >> rangeStart >> rangeEnd){
        rangeStartTemp = rangeStart;
        rangeEndTemp = rangeEnd;
        maxCycleLength = 0;
        if(rangeStart > rangeEnd) swap(rangeStart, rangeEnd);
        for(i = rangeStart; i <= rangeEnd; i++){
            temp = i;
            cycleLength = 1;
            while(temp != 1){
                if(temp % 2 == 0){
                    temp = temp / 2;
                }
                else{
                    temp = (3 * temp) + 1;
                }
                cycleLength++;
            }
            if(cycleLength > maxCycleLength){
                maxCycleLength = cycleLength;
            }
        }
        if(rangeStartTemp > rangeEndTemp) swap(rangeStart, rangeEnd);
        cout << rangeStart << " " << rangeEnd << " " << maxCycleLength << endl;
    }
    return 0;
}
