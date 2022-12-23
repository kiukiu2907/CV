#include <iostream>
using namespace std;
int main (){
    int ab,bc,ca,t;
    cin >>ab>>bc>>ca;
    cin>>t;
    while (t>0) {
        if (t-ab <0) {
            cout << "AB";
            return 0;
            }
            if (t-ab ==0) {
                cout << "B";
                return 0;
            }
            else t-=ab;
        if (t- bc < 0) {
            cout << "BC"; 
            return 0;
        }
            if (t-bc ==0) {
            cout << "C";
            return 0;
            }
            else t-=bc;
        if (t - ca <0) cout << "CA"; 
            if ( t - ca ==0) {
                cout << "A";
            }
    }
    return 0;
}