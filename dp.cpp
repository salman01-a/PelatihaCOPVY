 #include <iostream>
 #include <cmath>
using namespace std;
int main(){
int a;
cin>> a;

for (int i = 0 ; i <17 ; i++){
if ( pow(2 , i) == a){
cout <<"ya"<<endl;
return 0;
}
}
cout <<"bukan"<<endl;
}