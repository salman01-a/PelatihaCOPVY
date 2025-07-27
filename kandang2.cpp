#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n , L,P, terkecil = 0, terbesar = 0;
    
    vector<int>p;
    vector<int>l;   
    vector<int>luas;
    cin >> n;
    for (int i = 0 ;i <n ;i++){
        cin>>P>>L;
        p.push_back(P);
        l.push_back(L);
        luas.push_back(P*L);

    }
    sort(luas.begin(),luas.end());

    cout << luas[n -1] << " "<< luas[0];
    return 0;
}
