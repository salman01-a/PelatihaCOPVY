#include <iostream>
using namespace std;

int main(){
    int n,counter= 0;
    cin >>n;

    for ( int i = 1; i <=100; i++)
    {
       if (n%i == 0){
        counter++;
       }
    }

    if (counter == 5)       
    {
        cout<<"YES"<<endl;
    }else{
        cout <<"NO"<<endl;
    }
    
    
}