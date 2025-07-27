#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long n,ans=0,A,B;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> A;
        cin >> B;
        ans = ans + A + B;
    }
    cout<< ans * n ;
}   