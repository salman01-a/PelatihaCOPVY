#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int a, n, o, p,ans = 0;
    vector<int> bil;

    cin >> n >> o >> p;
    for(int i = 0; i <n; i++){
      cin >> a;
      bil.push_back(a);
    }

    if ( o == 1){
        for(int i  = 0 ; i < n ; i++){
          ans += bil[i];  
        }
        if (ans == p)
        {
           cout << "Benar";
        }else{
            cout << "Salah";
        }
        
    }
    if (o == 2){
        for(int i  = 0 ; i < n ; i++){
          ans -= bil[i];  
        }
        if (ans == p)
        {
           cout << "Benar";
        }else{
            cout << "Salah";
        }
    }
    return 0;
}
