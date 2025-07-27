#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,counter= 0 , hasil,kali = 1,tambah=0;;
    cin >> n;
    if(n <19 ){
        cout << counter;
        return 0;
    }
    for (int i = 1; i <= n; i++){   
       string temp = to_string(i);
       for (int j = 0 ; j < temp.size(); j++){
        int a = temp[j] - '0';

         kali *= a;
         tambah +=a;
       }
        hasil = kali+tambah;
        if( hasil == i){
            counter++;  
        }
             kali=1;
         tambah=0;
    }
    cout<< counter;
}