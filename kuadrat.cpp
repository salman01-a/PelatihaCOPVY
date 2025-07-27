#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int n, ans = 0;
    cin >> n;

    ans = pow(n, 0.5);
    if (ans*ans == n)
    {
        cout << ans ;
    }else cout << 0;
    


}