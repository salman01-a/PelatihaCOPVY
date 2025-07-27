#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int l[5][2];
    int t[5];
    int terbesar =0;
    for (int i = 0; i < 5; i++)
    {
        cin >> l[i][0] >> l[i][1];
         t[i] = l[i][0]*l[i][1];
    }
    
    for (int i = 0; i < 5; i++)
    {
       if (terbesar < t[i]){
        terbesar = t[i];
       }

    }
    
    
    cout << terbesar;
    return 0;
}
