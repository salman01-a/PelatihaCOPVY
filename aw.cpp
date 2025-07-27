#include <iostream>
using namespace std;
//peeringkat 1  = 4 poin
// absolute winner  = juara 1 mulu
int main(){
   int a=0,b=0,c=0;
    cin >> a >> b >> c;

   int ans = (a+b+c) / 7* 4 ;
   if(a == ans ||b == ans || c == ans){
    cout <<"YA"<<endl;
   }else cout <<"TIDAK"<<endl;
   

}        