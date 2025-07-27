    #include <cmath>
    #include <cstdio>
    #include <vector>
    #include <iostream>
    #include <algorithm>
    using namespace std;


    int main() {
        int n,d,m,y,counter = 0;
        string M;
        cin >>n;
        int arr [n][3];
        int hasil[n] ;
        for (int i = 0; i <n ; i++){
        cin >> d >> M >> y;
        m = stoi(M);    
        arr[i][0] = d;
        arr[i][1]= m;
        arr[i][2]= y; 

        for ( int j = y ; j < y +18; j++){
            if((j % 400 == 0) || (j % 4 == 0 && j % 100 != 0)){
                counter++;
            }
        }

        hasil[i]= counter + 18*365;
        counter = 0;
        }


        for(int i = 0; i<n; i ++ ){
        cout<<hasil[i]<<endl;
        }
        return 0;
    }
