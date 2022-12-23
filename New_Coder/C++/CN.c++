#include <iostream>
using namespace std;
int main (){
    //khai bao
    int n;
    cin >> n;
    int a[n];
    int s=0;
    
    
    // nhap mang
      for (int i= 0 ; i< n; i++) {
        cin >>  a[i];
    }
    
    
    // tim max va min 
    int Max= a[0]; 
     for (int i= 0 ; i< n; i++) {
        if (Max < a[i]) Max = a[i];
    }
    
    
    // dem
    for ( int j = 0 ;j<= Max;j++){
        int dem=0;
    for (int i=0 ; i< n; i++) {
            if (j == a[i]) dem++;
        };
        if (dem > 0) cout << j <<" - "<<dem <<"; ";
        
    }
    
    
    return 0;
}