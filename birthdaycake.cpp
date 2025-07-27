#include <bits/stdc++.h>
using namespace std;

int main(){
int n, ans= 0;
cin >> n;
int  candles[n];
for (int i = 0; i<n ; i++){
cin >> candles[i];
}
auto max_it = max_element(candles, candles + sizeof(candles) / sizeof(candles[0]) );
int max_value = *max_it;
//   cout<<max_value;
for (int i = 0; i < n; i++)
{
if(candles[i] == max_value){

ans +=1;

}
}


cout<< ans;
    return 0;
}