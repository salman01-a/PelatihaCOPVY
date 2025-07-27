#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,c,d,counter = 0;
    cin >> a >>b>>c>>d;
    if(a>b)swap(a,b);
   for (int i = a +1; i < b; i++)
   {
    if (i % c != 0 && i % d != 0){
        counter++;
    }   
   }
   
cout << counter;
    return 0;
}
