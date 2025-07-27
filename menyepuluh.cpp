#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n;

    if (n % 10 == 0 ){
        cout << "YES"<< endl;
    }else{
        for (int i =0 ; i < 4; i++){
            n = n / 10.0;
            if (n % 10 == 0 ){
                if (n == 0 ){
                  cout <<"NO"<<endl;  
                  break;
                }
                 cout << "YES"<< endl; 
                 break;}
        }
}

}