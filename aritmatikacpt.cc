#include <iostream>
using namespace std;
// A B G H I Q S
int main(){
    int a,b,g,h,i,q,s,ans;
    cin >>a>>b>>g>>h>>i>>q>>s;
    

    if(a<0)
        ans += a;else ans -= a;
    if(b<0)
        ans += b;else ans -= b;
    if(g<0)
        ans += g;else ans -= g;
    if(h<0)
        ans += h;else ans -= h;
    if(a<0)
        ans += a;else ans -= a;
    if(a<0)
        ans += a;else ans -= a;
    if(a<0)
        ans += a;else ans -= a;

    cout<<ans<<endl;

}